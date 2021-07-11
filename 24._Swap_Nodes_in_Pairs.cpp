//url - https://leetcode.com/problems/swap-nodes-in-pairs/
//time complexity - O(n) , where n is the length of list
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
        int ttmp;
        ListNode* tmp = head;
        while(tmp!=nullptr && tmp->next!=nullptr){
            ttmp = tmp->val;
            tmp->val = tmp->next->val;
            tmp->next->val = ttmp;
            tmp = tmp->next->next;
        }
        
        return head;
    }
};