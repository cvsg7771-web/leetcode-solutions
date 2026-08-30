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
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return true;
        }
        ListNode* temp1 = head;
        ListNode* temp2 = head;

        stack<int> s;
        while (temp1 && temp1->next) {
            s.push(temp2->val);
            temp1 = temp1->next->next;
            temp2 = temp2->next;
        }
          if (temp1 != nullptr) {
            temp2 = temp2->next;
        }

        while (temp2 != nullptr) {
            if (temp2->val != s.top()) {
                return false;
            }
            s.pop();
            temp2 = temp2->next;
        }
        return true;;
    }
};