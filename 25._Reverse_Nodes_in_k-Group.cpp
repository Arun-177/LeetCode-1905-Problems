//url - https://leetcode.com/problems/reverse-nodes-in-k-group/
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *ttmp,*tmp = head;
        int n=0,i,j;
        vector<int> v;
        while(tmp!=nullptr){
            n++;
            tmp = tmp->next;
        }
        tmp = head;
        for(i=0;i<n/k;i++){
            ttmp = tmp;
            v.clear();
            for(j=0;j<k;j++){
                v.push_back(ttmp->val);
                ttmp = ttmp->next;
            }
            for(auto k=v.rbegin();k!=v.rend();k++){
                tmp->val = *k;
                tmp = tmp->next;
            }
        }
        
        return head;
    }
};