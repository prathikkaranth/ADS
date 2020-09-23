Node* deleteEnd(Node* head) {
  if (!head) return NULL;
  Node* prev = NULL, *curr = head, *next = XOR(prev, curr -> npx);

  while (next) {
    prev = curr;
    curr = next;
    next = XOR(prev, curr->npx);
  }

  prev -> npx = XOR(prev -> npx, curr);
  delete curr;
  return head;
}

Node* deleteBeg(Node* head) {
  if (!head) return NULL;
  Node* next = XOR(head -> npx, NULL);
  next->npx = XOR(head, next -> npx);
  delete head;
  return next;
}