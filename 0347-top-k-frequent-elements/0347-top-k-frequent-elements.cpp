#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(int num : nums){
            mp[num]++;
        }

        priority_queue<pair<int,int>> pq;

        for(auto it : mp){
            pq.push({it.second, it.first});
        }

        vector<int> ans;
        int count=0;
        while(!pq.empty() && k>count){
            ans.push_back(pq.top().second);
            pq.pop();
            count+=1;
        }

        return ans;
    }
};