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
    void deleteNode(ListNode* node) {//1 2 3 4 5 6
        ListNode*temp=node->next;
        node->val=temp->val;
        node->next=temp->next;
        delete temp;
    }
};