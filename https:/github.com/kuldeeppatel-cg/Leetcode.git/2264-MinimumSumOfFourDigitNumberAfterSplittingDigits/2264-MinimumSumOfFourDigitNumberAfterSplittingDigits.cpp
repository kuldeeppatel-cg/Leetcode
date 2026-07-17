// Last updated: 17/07/2026, 14:18:15
class Solution {
public:
    int minimumSum(int num) {  // 2932    4009
        vector<int> store;
        while(num!=0){
            int dig = num%10;   //2932%10 = 2
            store.push_back(dig);
            num /= 10;     // 2932/10 
        }
                                 // {2,3,9,2}     {9,0,0,4}
        sort(store.begin(),store.end());  // {2,2,3,9}  {0,0,4,9}
        int num1 = store[0]*10 + store[2];  //0*10 + 4 = 4
        int num2 = store[1]*10 + store[3]; // 0*10 + 9 = 9

        return num1 + num2;
    }
};