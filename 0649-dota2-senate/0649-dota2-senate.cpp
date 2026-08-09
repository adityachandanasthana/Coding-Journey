class Solution {
public:
    string predictPartyVictory(string senate) {

        queue<int> R;
        queue<int> D;

        int n = senate.size();

        for(int i = 0; i < n; i++) {
            if(senate[i] == 'R')
                R.push(i);
            else
                D.push(i);
        }

        while(!R.empty() && !D.empty()) {

            int r = R.front();
            int d = D.front();

            if(r < d) {
                D.pop();
                R.pop();
                R.push(r + n);
            }
            else {
                R.pop();
                D.pop();
                D.push(d + n);
            }
        }

        if(R.empty())
            return "Dire";
        else
            return "Radiant";
    }
};
