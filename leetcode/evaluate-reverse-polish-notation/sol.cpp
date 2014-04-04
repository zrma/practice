#include <vector>
#include <iostream>
#include <stdlib.h>
#include <sstream>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string> &tokens) {
        vector<string> nums;
        for(vector<string>::iterator it=tokens.begin() ;it !=tokens.end(); it++) {
            string str = *it;
            if (str == "+" || str == "*" || str == "-" || str =="/")
                CalcPush(nums, str);
            else
                Push(nums, str);
        }
        return ToInt(Pop(nums));
    }
    
private:
    inline int ToInt(string s) {return atoi(s.c_str());}
    inline void Push(vector<string> &v, string str) {
        v.insert(v.begin(), str);
    }
    inline string Pop(vector<string> &v) {
        string str = v.front();
        v.erase(v.begin());
        return str;
    }
    void CalcPush(vector<string> &v, string op) {
        int num2 = ToInt(Pop(v));
        int num1 = ToInt(Pop(v));
        int ret = 0;
        char c = op[0];
        switch(c) {
            case '+':
                ret = num1 + num2;
                break;
            case '*':
                ret = num1 * num2;
                break;
            case '/':
                ret = num1 / num2;
                break;
            case '-':
                ret = num1 - num2;
                break;
        }
        ostringstream ssa;
        ssa << ret;
        Push(v, ssa.str());
    }
};

/* for test
int main(int argc, char *argv[]) {
    cout << "my program" << endl;
	vector<string> token;
	Solution s;
    
	while(1) {
		string str;
		cin >> str;
		if (str == "\\q")
			break;
		token.push_back(str);
	}
    
	int x = s.evalRPN(token);
	cout << x << endl;
    
	return 0;
}
*/
