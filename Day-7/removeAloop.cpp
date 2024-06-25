
//gfg
void removeLoop(Node* head)
    {
        if (head == nullptr || head->next == nullptr) {
            return; // If the list is empty or has only one node, no loop can exist.
        }

        Node* slow = head;
        Node* fast = head;

        // Detect if there is a cycle in the linked list
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            // If slow and fast meet, there is a loop
            if (slow == fast) {
                break;
            }
        }

        // If no loop was found, return
        if (slow != fast) {
            return;
        }

        // Find the start of the loop
        slow = head;
        while (slow->next != fast->next) {
            slow = slow->next;
            fast = fast->next;
        }

        // Remove the loop
        fast->next = nullptr;
    }