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
		if (head == NULL) return head;
        ListNode* result = head;
		ListNode* start = result;
		int seen = result->val;
		while (head != NULL)
		{
			if (head->val != seen)
			{
				seen = head->val;
				result->next = head;
				result = result->next;
			}
			head = head->next;
		}
		// Remove any duplicates left at the end
		result->next = NULL;
		return start;
    }
};