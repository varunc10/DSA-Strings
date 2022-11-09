class StockSpanner {
public:
    vector<int> span;
    stack<int> s;
    int i=0;
    StockSpanner() {  
        s.push(0);
    }
    int next(int price) {
        int sp;
        span.push_back(price);
        while(!s.empty()&&span[s.top()]<=span[i]){
            s.pop();
        }
        if(!s.empty()){
            sp=i-s.top();
        }
        else{
            sp=i+1;
        }
        s.push(i++);
        return sp;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */