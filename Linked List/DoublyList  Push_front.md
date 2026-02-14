# Doubly List Push_front 
## Explanation 
For non-empty lists, push_front links the new node: newNode->next = head, then head->prev = newNode, and updates head = newNode to shift the start. This preserves the doubly linked property, allowing reverse traversal if implemented.
