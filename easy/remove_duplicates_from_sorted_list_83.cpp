class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		if (head == NULL or head->next == NULL) return head;
		ListNode* fake_head = head;
		int prev = head->val;
		while(head->next) {
			if (head->next->val == prev) {
				head->next = head->next->next;
			} else{
				prev = head->next->val;
				head = head->next;
			}
		}
		return fake_head;
	}
};
