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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummyNode = new ListNode();
        dummyNode->next = head;
        ListNode* slow = dummyNode;
        ListNode* fast = dummyNode;

        while(n-- && fast != NULL){
            fast = fast->next;
        }
        fast = fast->next;  //要讓slow和fast保持n+1的距離，上面while只會保持n而以所以要在往後走一格才能+1

        while(fast != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;

        return dummyNode->next;
    }
};