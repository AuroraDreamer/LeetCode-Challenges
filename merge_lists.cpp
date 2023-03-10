/*https://leetcode.com/problems/merge-two-sorted-lists/

21. Merge Two Sorted Lists

You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list. */

#include<iostream>

using namespace std;

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      // If either list is empty, return the other list.
        if (list1 == nullptr) {
            return list2;
        }
        if (list2 == nullptr) {
            return list1;
        }
        
        // Initialize a pointer to the head of the merged list.
        ListNode* result = nullptr;
        
        // Compare the values of the heads of the two input lists.
        if (list1->val <= list2->val) {
            /* If the head of list1 is smaller or equal to the head of list2,
             set the result pointer to the head of list1. */
            result = list1;
            /* Recursively merge the rest of list1 and the entire list2, and
             set the next pointer of the result node to the merged list. */
            result->next = mergeTwoLists(list1->next, list2);
        } else {
            /* If the head of list2 is smaller than the head of list1,
              set the result pointer to the head of list2. */
            result = list2;
            /* Recursively merge the rest of list2 and the entire list1, and
              set the next pointer of the result node to the merged list. */
            result->next = mergeTwoLists(list1, list2->next);
        }
        // Return the pointer to the head of the merged list.
        return result;  
    }
};

