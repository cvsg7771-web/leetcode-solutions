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
ListNode* devide(ListNode* head)
{
    if(head == nullptr || head->next == nullptr)
        return head;

    ListNode* slow = head;
    ListNode* fast = head->next;

    while(fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode* a = slow->next;
    slow->next = nullptr;

    head = devide(head);
    a = devide(a);

    return conquer(head, a);
}
ListNode* conquer(ListNode *head1,ListNode *head2)
{
    ListNode *head;
    
if(head1 == nullptr) return head2;
if(head2 == nullptr) return head1;
    if(head1->val<head2->val)
    {
        head=head1;
        head1=head1->next;
    }
    else
    {
        head=head2;
        head2=head2->next;
    }
    ListNode *temp=head;
    while(head1&&head2)
    {
        if(head1->val<head2->val)
        {
            temp->next=head1;
            head1=head1->next;
        }
        else
        {
            temp->next=head2;
            head2=head2->next;

        }
        temp=temp->next;
    }
    if(head1)
    {
        temp->next=head1;
    }
    else
    {
        temp->next=head2;
    }
    return head;

}
    ListNode* sortList(ListNode* head) {
        if(head==nullptr||head->next==nullptr)
        {
            return head;
        }
       
        return devide(head);

        
    }
};