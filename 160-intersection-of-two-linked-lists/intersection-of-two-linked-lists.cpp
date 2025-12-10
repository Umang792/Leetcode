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

        // Step 1: Find lengths of both lists
        int size1 = 0, size2 = 0;
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;

        while (temp1 != NULL) {
            temp1 = temp1->next;
            size1++;
        }
        while (temp2 != NULL) {
            temp2 = temp2->next;
            size2++;
        }

        // Step 2: Reset pointers
        temp1 = headA;
        temp2 = headB;

        // Step 3: Move the longer list forward by difference
        if (size1 > size2) {
            int d = size1 - size2;
            while (d--) temp1 = temp1->next;
        } 
        else if (size2 > size1) {
            int d = size2 - size1;
            while (d--) temp2 = temp2->next;
        }

        // Step 4: Move both together until intersection is found
        while (temp1 != NULL && temp2 != NULL) {
            if (temp1 == temp2) return temp1;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        return NULL; // No intersection
    }
};
