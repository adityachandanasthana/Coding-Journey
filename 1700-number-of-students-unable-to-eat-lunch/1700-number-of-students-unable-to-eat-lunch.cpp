class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        queue<int> q;
        stack<int> st;

        // Students queue
        for (int x : students)
            q.push(x);

        // Sandwiches stack
        for (int i = sandwiches.size() - 1; i >= 0; i--)
            st.push(sandwiches[i]);

        int cnt = 0;

        while (!q.empty() && cnt < q.size()) {

            if (q.front() == st.top()) {
                q.pop();
                st.pop();
                cnt = 0;     
            }
            else {
                int x = q.front();
                q.pop();
                q.push(x);
                cnt++;
            }
        }

        return q.size();
    }
};