class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        if(s.size() < p.size())
            return ans;

        map<char,int> mp;
        map<char,int> window;

        for(char c : p)
            mp[c]++;

        int k = p.size();

        for(int i = 0; i < s.size(); i++) {

            window[s[i]]++;

            if(i >= k) {
                window[s[i-k]]--;

                if(window[s[i-k]] == 0)
                    window.erase(s[i-k]);
            }

            if(window == mp)
                ans.push_back(i-k+1);
        }

        return ans;
    }
};