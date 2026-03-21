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
    ListNode* insertionSortList(ListNode* head) {
        if(head == nullptr) return nullptr;
        ListNode *dummy = new ListNode(-1),*cur = dummy;
        while(head != nullptr){
            ListNode *tmp = head->next;
            cur = dummy; 
            while(cur->next && cur->next->val < head->val){
                cur = cur->next;
            }
            //put it between head node and head->next node
            head->next = cur->next;
            cur->next = head;
            head = tmp;
        
  
        }
        return dummy->next;
    }
};
