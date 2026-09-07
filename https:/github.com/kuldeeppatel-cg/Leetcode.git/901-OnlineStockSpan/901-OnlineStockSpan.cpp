// Last updated: 07/09/2026, 13:47:00
class StockSpanner {
public:
    stack<pair<int,int>> St;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span = 1;
        while(!St.empty() && St.top().first <= price){
            span += St.top().second;
            St.pop();
        }
      St.push({price,span})  ;
      return span;
    } 
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */