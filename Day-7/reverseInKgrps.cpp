class Solution {
public:

ListNode* solve(ListNode* head, int cnt, int k){
    //edge case
    if(head==NULL || head->next ==NULL) return head;
    if(k>cnt) return head;
    //reverse k nodes
    ListNode* prev= NULL;
      ListNode* curr = head;
      int a =0;
      while(curr and a<k){
          ListNode* next = curr->next;
          curr->next= prev;
          prev = curr;
          curr = next;
          a++;
      }
      head->next = solve(curr, cnt-k, k);
      return prev;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        int cnt =0;
        ListNode* curr = head;
        while(curr){
            cnt++;
            curr= curr->next;
        }
        return solve(head,cnt,k);

    }
};

//2nd type GFG
class Solution
{
    public:
    struct node *solve (struct node *head, int k){
        if(head==NULL or head->next==NULL) return head;
       node* prev= NULL;
       node* curr = head;
       int a =0;
       while(curr and a<k){
           node* next = curr->next;
           curr->next = prev;
           prev= curr;
           curr= next;
           a++;
       }
       head->next = solve(curr,k);
       return prev;
       
    }
    struct node *reverseIt (struct node *head, int k)
    { 
       return solve(head,k);
    }
};

//alternative reverse
// i=0; i<k-1
// head->next = curr;
// for(int i=0; i<k-1; i++){
//     curr= curr->next;
//     //edge case
//     if(curr==NULL) return prev;
// }
// curr->next = solve(curr->next, k);
// return prev;
// }
