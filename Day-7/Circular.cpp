//Insertion In Circular Linked List
Node* insert(int k, int val, Node *head) {
	// Write Your Code Here.
	Node* newNode = new Node(val);
    if (head == nullptr) {
        // List is empty, create the first node
        newNode->next = newNode;
        return newNode;
    }
    if (k == 0) {
        // Insert at the head
        Node* curr = head;
        while (curr->next != head) {
            curr = curr->next;
        }
        curr->next = newNode;
        newNode->next = head;
        return newNode; // New head
    } else {
        // Insert at position k (0-indexed)
        Node* curr = head;
        for (int i = 0; i < k - 1; ++i) {
            curr = curr->next;
        }
        newNode->next = curr->next;
        curr->next = newNode;
        return head; // Head remains the same
    }
}

//Deletion In Circular Linked List

Node* deleteNode(Node* head, int key) 
{
    // Write your code here.
    if (head == nullptr) return nullptr;

    Node* curr = head;
    Node* prev = nullptr;

    // Special case: Deleting the head node
    if (head->data == key) {
        if (head->next == head) {
            // Only one node in the list
            delete head;
            return nullptr;
        } else {
            // More than one node in the list
            Node* temp = head;
            while (curr->next != head) {
                curr = curr->next;
            }
            // 'curr' is now pointing to the last node
            curr->next = head->next;
            head = head->next;
            delete temp;
            return head;
        }
    }

    // General case: Deleting a node other than the head
    prev = head;
    curr = head->next;
    while (curr != head) {
        if (curr->data == key) {
            prev->next = curr->next;
            delete curr;
            return head;
        }
        prev = curr;
        curr = curr->next;
    }

    // If we reach here, the node was not found
   
    return head;
}

