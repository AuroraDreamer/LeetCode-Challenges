/* https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/description/

Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

Return the decimal value of the number in the linked list.

The most significant bit is at the head of the linked list.
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
    int getDecimalValue(ListNode* head) {

            int decimal_value = 0;
    while (head != NULL) {
        decimal_value = decimal_value * 2 + head->val;
        head = head->next;
    }
    return decimal_value;
        
        
    }
}
