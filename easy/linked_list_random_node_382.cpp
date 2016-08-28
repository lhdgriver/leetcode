class Solution {
public:
	Solution(ListNode* head) {
		fake_head = head;
	}

	int getRandom() {
		ListNode* head = fake_head;
		int ret = head->val;
		head = head->next;
		int count = 2;
		while(head != NULL) {
			if (rand() % count == 0)
				ret = head->val;
			count++;
			head = head->next;
		}

		return ret;
	}
private:
	ListNode* fake_head;
};
