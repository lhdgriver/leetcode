class Solution {
public:
	bool isPalindrome(ListNode* head) {
		if (head == NULL || head->next == NULL) return true;
		int length = getLength(head);
		ListNode* first_half_head = head;
		for(int i = 0; i < length / 2 - 1; i++) {
			head = head->next;
		}
		ListNode* sec_half_head = reverseList(head->next);
		head->next = NULL;
		while(first_half_head != NULL && sec_half_head != NULL) {
			if (first_half_head->val != sec_half_head->val) return false;
			first_half_head = first_half_head->next;
			sec_half_head = sec_half_head->next;
		}

		return true;
	}

private:
	ListNode* reverseList(ListNode* head) {
		if (head == NULL) return NULL;

		ListNode* new_head = NULL;
		while(head != NULL) {
			ListNode* tmp = head->next;
			head->next = new_head;
			new_head = head;
			head = tmp;
		}

		return new_head;
	}
	int getLength(ListNode* head) {
		int length = 0;
		while(head != NULL) {
			length++;
			head = head->next;
		}
		return length;
	}
};
