class Solution {
public:
    bool isPalindrome(string s) {
       vector<char>ans;
       
       for(char ch:s){
          if(isalnum(ch)){
            ch=tolower(ch);
            ans.push_back(ch);
           }
       }
       if(ans.empty()){
        return true;
       }

       int left=0;
       int right=ans.size()-1;
       while(left<right){
          if(ans[left]==ans[right]){
            left++;
            right--;
          }
          else{
            return false;
          }
       }
       return true;
    }
};