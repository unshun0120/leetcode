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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummyNode = new ListNode();
        dummyNode->next = head;
        ListNode* curr = dummyNode;

        while(curr->next != NULL){
            if(curr->next->val == val){
                curr->next = curr->next->next;
            }
            else
                curr = curr->next;
        }

        return dummyNode->next;
    }
};