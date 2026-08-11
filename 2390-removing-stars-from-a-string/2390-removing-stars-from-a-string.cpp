class Solution {
public:
    string removeStars(string s) {
        stack<char>s1;
        int n=s.size();
        for(int i=0;i<n;i++){
            
           
            if(s[i]!='*'){
                s1.push(s[i]);
            }else{
                s1.pop();
            }

        }
        string ans= "";
        while(!s1.empty()){
            ans+=s1.top();
            s1.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};