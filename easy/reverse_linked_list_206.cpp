class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		ListNode* reverseHead = NULL;
		ListNode* remainHead = head;
		while(remainHead){
			ListNode* tmp = remainHead->next;
			remainHead->next = reverseHead;
			reverseHead = remainHead;
			remainHead = tmp;
		}
		return reverseHead;
	}
};
