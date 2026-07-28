class Solution {
public:
    bool isPalindrome(string s) {
        vector<int>ans;
       
        for(char &ch : s){
            ch=tolower(ch);
            if(isalnum(ch)){
                ans.push_back(ch);
            }else{
                continue;

            }
        }
        int slow=0;
        int fast=ans.size()-1;
        while(slow<fast){
            if(ans[slow]==ans[fast]){
                slow++;
                fast--;
            }else{
                return false;
            }
        }
       return true; 
    }
};