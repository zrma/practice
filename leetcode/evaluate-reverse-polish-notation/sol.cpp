#include <vector>
#include <iostream>
#include <stdlib.h>
#include <sstream>

using namespace std;

class Solution {
	public:
		int evalRPN(vector<string> &tokens) {
			vector<string> nums;
			int ret;
			while(!tokens.empty()) {
				string str = pop(tokens);
				if (str == "+" || str == "*" || str == "-" || str =="/") 
					push(nums, calc(nums, str));
				else
					push(nums, str);
			}
			return atoi(pop(nums).c_str());
		}
	private:
		void push(vector<string> &v, string str) {
			v.insert(v.begin(), str);
		}
		string pop(vector<string> &v) {
			string str = v.front();
			v.erase(v.begin());
			return str;
		}
		string calc(vector<string> &v, string op) {
			int num2 = atoi(pop(v).c_str());
			int num1 = atoi(pop(v).c_str());
			int ret;
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
			return ssa.str();
		}
};


int main(int argc, char *argv[]) {
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
