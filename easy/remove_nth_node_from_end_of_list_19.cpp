class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode* fake_head = new ListNode(0);
		fake_head->next = head;
		ListNode* p1 = fake_head;
		ListNode* p2 = fake_head;
		while(n--) {
			p2 = p2->next;
		}

		while(p2->next != NULL) {
			p2 = p2->next;
			p1 = p1->next;
		}
		p1->next = p1->next->next;

		p1 = fake_head->next;
		delete fake_head;
		return p1;
	}
};
