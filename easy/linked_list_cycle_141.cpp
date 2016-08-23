class Solution {
public:
	bool hasCycle(ListNode *head) {
		if (head == NULL) return false;
		if (head->next == NULL) return false;
		ListNode* step_1 = head;
		ListNode* step_2 = head->next;
		while(true) {
			if (step_1 == step_2) return true;
			if (step_2->next == NULL) break;
			if (step_2->next->next ==NULL) break;
			step_2 = step_2->next->next;
			step_1 = step_1->next;
		}

		return false;
	}
};
