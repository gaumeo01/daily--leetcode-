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
        ListNode *l3 = new ListNode(0);
        ListNode *head=l3;
        int carry = 0;
        while (l1 && l2) {
            int value = l1->val + l2->val + carry;
            carry = value / 10;
            l3->next = new ListNode(value % 10);
            l3=l3->next;
            l1=l1->next;
            l2=l2->next;
        }
        while (l1) {
            int value = l1->val + carry;
            carry = value / 10;
            l3->next = new ListNode(value % 10);
            l3=l3->next;
            l1=l1->next;
        }
        while (l2) {
            int value = l2->val + carry;
            carry = value / 10;
            l3->next = new ListNode(value % 10);
            l2=l2->next;
            l3=l3->next;
        }
        if(carry)
        {
            l3->next = new ListNode(carry);
        }
        ListNode*result =head->next;
        delete head;
        return result;
        
    }
    };