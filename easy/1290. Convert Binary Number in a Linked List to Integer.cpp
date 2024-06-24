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
        int bin[30], index=0, i, dec=0;

        while( head != NULL ){
            bin[index] = head->val;
            head = head->next;
            index++;
        }

        for( i = index-1; i >= 0; i-- ){
            dec += bin[i]*pow(2, index-1-i);
        }

        return dec;
    }
};
