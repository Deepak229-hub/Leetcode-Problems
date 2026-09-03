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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return nullptr;
        if (head->next == nullptr) return head;

        ListNode* i = head;
        ListNode* j = i->next;

        while (j != nullptr) {
            if (i->val == j->val) {
                ListNode* temp = j;
                j = j->next;
                i->next = j;
                delete temp;
            }
            else if (j->val != i->val) {
                i->next = j;
                i = j;
                j = j->next;
            }
        }

        return head;
    }
};