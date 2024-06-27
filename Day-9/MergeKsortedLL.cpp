class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& arr) {
        int n = arr.size();
        if(n==0) return NULL;
        priority_queue<pair<int,ListNode*> , vector<pair<int,ListNode*>> , greater<pair<int,ListNode*>>> pq;
        for(int i=0; i<n; i++){
            if(arr[i] !=NULL){
                int data = arr[i]->val;
                pq.push({data,arr[i]});
            }
        }
        ListNode* dummy = new ListNode(-1);
        ListNode* head = dummy;
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            ListNode* node = it.second;
            dummy->next = node;
            dummy = dummy->next;
            if(node->next) {
                int data = node->next->val;
                pq.push({data,node->next});
            }
        }
        return head->next;

    }
};