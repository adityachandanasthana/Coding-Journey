class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        deque<int>dq;
        sort(deck.begin(),deck.end());
        for(int i=deck.size()-1;i>=0;i--){
            if(!dq.empty()){
                int x=dq.back();
                dq.pop_back();
                dq.push_front(x);
            }
            dq.push_front(deck[i]);
        }
     return vector<int>(dq.begin(),dq.end());   
    }
};