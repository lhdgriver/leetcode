class Solution {
public:
	ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
		int length_a = getLength(headA);
		int length_b = getLength(headB);
		if (length_a < length_b) {
			for(int i = 0; i < length_b - length_a; i++) {
				headB = headB->next;
			}
		}
		if (length_a > length_b) {
			for(int i = 0; i < length_a - length_b; i++) {
				headA = headA->next;
			}
		}

		while(headA != headB) {
			headA = headA->next;
			headB = headB->next;
		}

		return headA;
	}
private:
	int getLength(ListNode* head) {
		int length = 0;
		while(head) {
			length++;
			head = head->next;
		}
		return length;
	}
};
