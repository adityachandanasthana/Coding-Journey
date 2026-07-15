/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode* ,int>mp;
        ListNode* temp= headA;
        // ListNode* temp= headB;

        while(temp!=NULL){
            mp[temp]++;
            temp=temp->next;
        }
        temp = headB;
        while(temp!=NULL){
            mp[temp]++;
            if(mp[temp]==2){
                return temp;
            }
            temp=temp->next;
        }





        
     return NULL;   
    }
};