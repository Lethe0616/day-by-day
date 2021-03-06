/*
对于一个字符串，请设计一个算法，判断其是否为一个合法的括号串。

给定一个字符串A和它的长度n，请返回一个bool值代表它是否为一个合法的括号串。

测试样例：

"(()())",6
返回：true
测试样例：

"()a()()",7
返回：false
测试样例：

"()(()()",7
返回：false
*/
class Parenthesis {
public:
    bool chkParenthesis(string A, int n) {
        // write code here
     int l = 0; //左括号数
    for (int i = 0; i < A.length(); i++) 
    {
        char c = A[i];
        if (c == '(') {
            l++;
        } else if (c == ')') {
            if (l > 0) {
                l--;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }
    return l == 0;
        }
};

