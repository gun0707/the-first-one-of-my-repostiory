ListNode* removeRange(ListNode* head, int minVal, int maxVal) {
	// 虚拟头节点，指向原始链表头，统一所有删除场景的逻辑
	ListNode* dummy = new ListNode(-1);
	dummy->next = head;
	ListNode* prev = dummy;
	ListNode* cur = head;
	

while (cur != nullptr) {

	if (cur->val > minVal && cur->val < maxVal) {
		ListNode* temp = cur;
		prev->next = cur->next;
		cur = prev->next;
		delete(temp);
	}
	else {
		prev = cur;
		cur = cur->next;
}}