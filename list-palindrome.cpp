//https://leetcode.com/submissions/detail/913271391/

/*234. Palindrome Linked List

Given the head of a singly linked list, return true if it is a palindrome or false otherwise.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL){
            return true;
        }
        //create two new nodes and initialize them with head
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        while(temp2 != NULL && temp2->next != NULL){
           temp1 = temp1->next;
           temp2 = temp2->next->next;
        }

        ListNode* prev = NULL;
        ListNode* next = NULL;
        while (temp1 != NULL) {
            next = temp1->next;
            temp1->next = prev;
            prev = temp1;
            temp1 = next;
        }

        temp1 = head;
        temp2 = prev;
        while (temp1 != NULL && temp2 != NULL) {
            if (temp1->val != temp2->val) {
                return false;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        return true;
        }
};
