//url - https://leetcode.com/problems/merge-two-sorted-lists/
//time complexity - O(m+n) ,  where m is the length of first sorted list and n is the length of second sorted list
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode *tmp,*op;
        tmp = op = new ListNode();
        
        if(l1==nullptr && l2 == nullptr) return nullptr;
        if(l1==nullptr) return l2;
        if(l2==nullptr) return l1;
        
        if(l1->val > l2->val) {
            tmp->val = l2->val;
            l2=l2->next;
        }
        else{
            tmp->val = l1->val;
            l1=l1->next;
        }
        
        while(l1!=nullptr && l2!=nullptr){
            if(l1->val > l2->val) {
                tmp->next = new ListNode(l2->val);
                l2=l2->next;
            }
            else{
                tmp->next = new ListNode(l1->val);
                l1=l1->next;
            }
            tmp = tmp->next;
        }
        while(l1!=nullptr){
            tmp->next = new ListNode(l1->val);
            l1=l1->next;
            tmp = tmp->next;
        }
        while(l2!=nullptr){
            tmp->next = new ListNode(l2->val);
            l2=l2->next;
            tmp = tmp->next;
            
        }
        return op;
        
    }
};