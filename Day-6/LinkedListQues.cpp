//leetcode 142 detect where cycle begins
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next ==NULL) return NULL;
        ListNode * slow = head;
        ListNode * fast = head;
        while(fast and fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast) break;
        }
        if(slow != fast) return NULL;
        slow = head;
        while(fast != slow){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};

//141- loop or not
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode * slow = head;
        ListNode * fast = head;
        while(fast!=NULL and fast->next !=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast) return true;
        }
        return false;
    }
};

//middle of the linked list - leetcode 876
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast and fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

//leet 2095 
//delete middle node of ll
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next ==NULL){
            delete head;
            return NULL;
        }
        ListNode* prev = head;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast and fast->next){
            prev= slow;
            slow= slow->next;
            fast = fast->next->next;
        }
        // if(prev->next !=NULL){
        prev->next= slow->next;
        
        delete slow;
        return head;
    }
};