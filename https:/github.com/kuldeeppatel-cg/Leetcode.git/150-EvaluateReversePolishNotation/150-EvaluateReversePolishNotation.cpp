// Last updated: 17/07/2026, 14:20:02
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> num;
        int result = 0;
        bool first = true;

        for (string it : tokens) {

            if (it != "+" && it != "-" && it != "*" && it != "/") {
                num.push(stoi(it));
            }
            else {

                int b = num.top();
                num.pop();

                int a = num.top();
                num.pop();

                if (it == "+") {
                    result = a + b;
                }
                else if (it == "-") {
                    result = a - b;
                }
                else if (it == "*") {
                    result = a * b;
                }
                else {
                    result = a / b;
                }
                num.push(result);
            }
        }

        return num.top();
    }
};