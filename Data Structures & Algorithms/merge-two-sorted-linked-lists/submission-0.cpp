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
    ListNode* mergeTwoLists(ListNode *list1, ListNode* list2) {
        ListNode* cur1=list1;
        ListNode* cur2=list2;
        ListNode* result=nullptr;
        ListNode* head=nullptr;
        if(!list1) return list2;
if(!list2) return list1;
        
        if(cur1->val<=cur2->val){
             result=list1;
           head=list1;
           cur1=cur1->next;
        }else{
           result=list2;
            head=list2;
            cur2=cur2->next;
        }
        while(cur1&&cur2){
            if(cur1->val<=cur2->val){
                result->next=cur1;
                result=cur1;
                cur1=cur1->next;
            }
            else if(cur1->val>cur2->val){
                result->next=cur2;
                 result=cur2;
                cur2=cur2->next;
            }
        }if(cur1){
            while(cur1){
                 result->next=cur1;
                result=cur1;
                cur1=cur1->next;
            }
        }if(cur2){
            while(cur2){
                 result->next=cur2;
                result=cur2;
                cur2=cur2->next;
            }
        }return head;
    }
};//empty list wala case ke liye next nhi exist karta
