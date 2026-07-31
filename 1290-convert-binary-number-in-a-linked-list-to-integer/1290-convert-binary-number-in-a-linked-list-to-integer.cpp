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
    int getDecimalValue(ListNode* head) {
        ListNode* temp =head;
        vector<int>s;
        while(temp!=NULL){
            s.push_back(temp->val);
            temp=temp->next;
            
        }
        int ans=0;
        for(int bit: s){
            ans=ans<<1;
            if(bit==1){
                ans++;
            }
        }
        

     return ans;   
    }
};