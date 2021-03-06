// url - https://leetcode.com/problems/add-two-numbers/
// time complexity - O(n) where n is the length of bigger number
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ptr,*op;
        ptr = op = new ListNode(0);
        int tmp=0;
        while(l1!=nullptr && l2!=nullptr){
            ptr->next = new ListNode((l1->val+l2->val+tmp)%10);
            ptr = ptr->next;
            tmp = (l1->val+l2->val+tmp)/10;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1!=nullptr){
            ptr->next = new ListNode((l1->val+tmp)%10);
            ptr = ptr->next;
            tmp = (l1->val+tmp)/10;
            l1 = l1->next;
        }
        while(l2!=nullptr){
            ptr->next = new ListNode((l2->val+tmp)%10);
            ptr = ptr->next;
            tmp = (l2->val+tmp)/10;
            l2 = l2->next;
        }
        if(tmp==1){
            ptr->next = new ListNode(tmp);
        }
        
        return op->next;
        
    }
};