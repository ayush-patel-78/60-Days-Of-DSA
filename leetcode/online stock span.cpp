class StockSpanner {
public:
    stack<pair<int,int>> st;
    int count = 0;
   
    StockSpanner() {
        count = 0; 
    }
    
    int next(int price) {
        int ans =1;
        int index=-1;
        if(st.empty()) {
            st.push({price,count});
            count++;
             return 1;
        }
        while(!st.empty()){
            if(st.top().first > price) {
                 index = st.top().second;
                 break;
            }
            else st.pop(); 
        }
        ans = count - index;
        st.push({price,count});
        count++;
        return ans;

    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */