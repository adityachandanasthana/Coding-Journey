class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        if(n>m)
        return false;
        unordered_map<char,int>mp1,mp2;

        for(int i=0;i<n; i++){
            mp1[s1[i]]++;
            mp2[s2[i]]++;
        }
        if(mp1==mp2)
        return true;
        int left=0;

        for(int right=n;right<m;right++){
            mp2[s2[right]]++;
            mp2[s2[left]]--;

            if(mp2[s2[left]]==0){
                mp2.erase(s2[left]);

            }

            left++;
            if(mp1==mp2)
            return true;
        }
        return false;
    }
};