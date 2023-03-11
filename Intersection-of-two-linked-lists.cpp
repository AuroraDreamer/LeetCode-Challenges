//https://leetcode.com/problems/intersection-of-two-linked-lists/

//Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
	   
	   ListNode* listA = headA;
	   ListNode* listB = headB;
	   int intersectVal, skipA, skipB;  
	   int countA = 0;
	   int countB = 0;
	   int lenDiff = 0;
        
        while(listA != NULL){
            countA++;
            listA = listA->next;
        }

        while(listB != NULL){
            countB++;
            listB = listB->next;
        }
        //
        lenDiff = abs(countA - countB);

        // Reset the list pointers to the heads
        listA = headA;
        listB = headB;

        // Advance the longer list pointer by lenDiff nodes
        if (countA > countB) {
            for (int i = 0; i < lenDiff; i++) {
                listA = listA->next;
            }
        } else {
            for (int i = 0; i < lenDiff; i++) {
                listB = listB->next;
            }
        }

        while (listA != NULL && listB != NULL){
            if(listA == listB){
                return listA;
            }
            listA = listA->next;
            listB = listB->next;
        }
		   return NULL;

    }
};
