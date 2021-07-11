//url - https://leetcode.com/problems/merge-k-sorted-lists/
//time complexity - O(m+n+o+_ _ _) , where m, n, o _ _ _ is the length of respective lists
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return nullptr;
        ListNode *tmp,*head;
        vector<int> v;
        for(auto k:lists){
            tmp = k;
            while(tmp!=nullptr){
                v.push_back(tmp->val);
                tmp = tmp->next;
            }
        }
        if(v.size()==0) return nullptr;
        sort(v.begin(),v.end());
        tmp = new ListNode(v[0]);
        head = tmp;
        for(int i=1;i<v.size();i++){
            tmp->next = new ListNode(v[i]);
            tmp = tmp->next;
        }
        return head;
    }
};