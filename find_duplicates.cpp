/*	https://leetcode.com/problems/remove-duplicates-from-sorted-list/

	83. Remove Duplicates from Sorted List

	Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well. */


/*# 1 "/workspaces/LeetCode-Challenges/find_duplicates.cpp"
# 1 "/workspaces/LeetCode-Challenges//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/workspaces/LeetCode-Challenges/find_duplicates.cpp"
# 21 "/workspaces/LeetCode-Challenges/find_duplicates.cpp"
*/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* node1 = head;

        if(head == NULL){
            return NULL;
        }

        while(node1->next!=NULL){

            if(node1->val == node1->next->val){
                ListNode* temp = node1->next;
                node1->next = node1->next->next;
                delete temp;
            }

            else{
                node1 = node1->next;
            }
        }
        return head;
    }
};
