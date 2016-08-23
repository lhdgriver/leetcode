class Solution {
public:
	ListNode* swapPairs(ListNode* head) {
		if (head == NULL || head->next == NULL) return head;
		ListNode* fake_head = new ListNode(0);
		fake_head->next = head;
		head = fake_head;
		while(true) {
			if (head->next == NULL) break;
			if (head->next->next == NULL) break;
			ListNode* tmp = head->next;
			head->next = head->next->next;
			tmp->next = tmp->next->next;
			head->next->next = tmp;
			head = head->next->next;
		}
		return fake_head->next;
	}
};
