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
        ListNode *temp1=head;
        ListNode  *temp2=head;
        ListNode *temp3=head;
        while(temp1!=nullptr)
        {
             ListNode* next = temp1->next;
            if(temp1->val<head->val)
            {ListNode *t=temp1->next;
            temp3->next=t;
                temp1->next=head;
                
                head=temp1;
                temp1=t;
            }
           else if(temp1->val<temp3->val)
            {temp2=head;
                while(temp2->next!=temp1&&temp2->next->val<temp1->val)
                {
                    temp2=temp2->next;
                }
                ListNode *d=temp1->next;
               temp1->next = temp2->next;
                temp2->next = temp1;
               
                temp3->next=d;
                temp1=d;
               
            }
            else
            {
                    temp3=temp1;
            }
            temp1=next;


            
        }
        return head;
        
    }
};