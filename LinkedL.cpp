/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
         ListNode* temp=head;
         ListNode* remp=head;
         int count=0;
         while(temp){
            count++;
            temp=temp->next;
         }
          
          if(count==1)return NULL;
         temp=head;
          int y= (count/2)+1;
          count=(count/2)-1;
         while(count){
            temp=temp->next;
            count--;
         }
         
         while(y){
            remp=remp->next;
            y--;
         }

         

         temp->next=remp;
         return head;
    }
};