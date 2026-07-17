// Last updated: 17/07/2026, 14:18:33
class Solution {
public:
    string sortSentence(string s) {
        string word[100];
        string wd = "";
        int count = 0;
        for(char it: s){
            if(it >= 40 && it <= 57 ){
                int num = (int)it - 48;
                word[num-1]=wd;
                count++;
            }
            else if(it != ' '){
                
                wd += it;
            }
            else{
                wd = "";
            }
        }
        wd = "";
        for(int i=0; i<count; i++){
           if(i == count-1){
             wd += word[i];
           }
           else{
            wd += word[i] + " ";
           }
        }
        return wd;
    }
};