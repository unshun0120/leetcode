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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummyNode = new ListNode();
        dummyNode->next = head;
        ListNode* curr = dummyNode;
        ListNode* tmp1 = new ListNode();
        ListNode* tmp2 = new ListNode();
        //當curr的時候去處理1、2，當curr=2時去處理3、4，當curr=4時去處理5、6，...
        //所以當Node數是偶數時若curr->next是NULL則終止
        //所以當Node數是奇數時若curr->next->next是NULL則終止
        while(curr->next != NULL && curr->next->next != NULL){
            tmp1 = curr->next;
            tmp2 = curr->next->next->next;
            curr->next = curr->next->next;  //h->2
            curr->next->next = tmp1; //2->1    
            curr->next->next->next = tmp2;  //1->3
            curr = curr->next->next;
        } 

        return dummyNode->next;
    }
};