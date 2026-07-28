class StockSpanner {
public:
    stack<pair<int,int>> st;
    int index;

    StockSpanner() {
        index = 0;
    }

    int next(int price) {

        while(!st.empty() && st.top().first <= price){
            st.pop();
        }

        int span;

        if(st.empty()){
            span = index + 1;
        }
        else{
            span = index - st.top().second;
        }

        st.push({price, index});
        index++;

        return span;
    }
};