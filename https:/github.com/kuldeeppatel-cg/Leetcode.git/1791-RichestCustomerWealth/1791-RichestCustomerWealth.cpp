// Last updated: 17/07/2026, 14:18:49
class Solution {
public:
    int sumAccounts(vector<int> data){
        int sum = 0;
        for(int it : data ){
            sum += it;
        }
        return sum;
    }
    int maximumWealth(vector<vector<int>>& accounts) {
       int wealth = 0;
       for(auto it: accounts){    // [[1,5],[7,3],[3,5]]
          int data = sumAccounts(it);   
          if(wealth < data){
             wealth = data;    // wealth = 10
          }
       }
       return wealth;  
    }
};

//