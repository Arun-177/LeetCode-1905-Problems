//url - https://leetcode.com/problems/remove-nth-node-from-end-of-list/
// time complexity - O(n) , where n is the length of list
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

        ListNode *tmp;
        tmp = new ListNode();
        tmp->next = head;
        head = tmp;
        tmp = head;
        int i=0;
        while(tmp!=nullptr){
            i++;
            tmp = tmp->next;
        }
        
        i = i-n-1;
        tmp = head;
        while(i--){
            tmp = tmp->next;
        }
        tmp->next = tmp->next->next;
        
        return head->next;
        
    }
};