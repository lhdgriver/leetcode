class Solution {
public:
	ListNode* removeElements(ListNode* head, int val) {
		if (head == NULL) return NULL;
		ListNode* fake_head = new ListNode(0);
		fake_head->next = head;
		head = fake_head;
		while(head->next != NULL) {
			if (head->next->val != val) {
				head = head->next;
				continue;
			}
			head->next = head->next->next;
		}

		head = fake_head->next;
		delete fake_head;
		return head;
	}
};
