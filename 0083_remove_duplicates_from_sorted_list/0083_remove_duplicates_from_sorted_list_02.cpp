/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
		if (head == NULL || head->next == NULL) return head;
        ListNode* result;
		if (head->val != head->next->val)
		{
			result = head;
			result->next = deleteDuplicates(head->next);
		}
		else
		{
			result = deleteDuplicates(head->next);
		}
		return result;
    }
};