ListNode* reverseList(ListNode* head) {
	ListNode* cur = head;
	ListNode* prev = nullptr;
	while (cur != nullptr) {
		ListNode* temp = cur->next;
		cur->next = prev;
		prev = cur;
		cur = temp;
	}
	return prev;
}
