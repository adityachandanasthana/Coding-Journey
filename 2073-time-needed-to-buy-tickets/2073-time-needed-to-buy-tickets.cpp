class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;

        for (int i = 0; i < tickets.size(); i++) {
            q.push(i);
        }

        int time = 0;

        while (tickets[k] > 0) {
            int person = q.front();
            q.pop();

            tickets[person]--;
            time++;

            if (tickets[person] > 0) {
                q.push(person);
            }
        }

        return time;
    }
};