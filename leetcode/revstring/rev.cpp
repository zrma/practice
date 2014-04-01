#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	void reverseWords(string &s) {		
		RemoveFrontSpace(s);
		RemoveLastSpace(s);	
		string r;
		if (s.size() < 2)
			return;

		while (s.size() > 0)
			PushWord(s);

		while (stack.size() != 0) {
			if (stack.size() == 1)
				r += stack.back();
			else
				r += stack.back() + " ";
			stack.pop_back();
		}
		s = r;
	}

private:
	vector<string> stack;	

	void PushWord(string &s) {
		RemoveFrontSpace(s);		
		int i = 0;
		int end = s.size() - 1; //last index
		while (s[i] != ' ' && i <= end ) 
			i++;		
		stack.push_back(s.substr(0, i));
		s.erase(0, i);
	}

	void RemoveFrontSpace(string &s) {
		int i = 0;
		while (s[i] == ' ') 
			i++;		
		s.erase(0, i);
	}
	void RemoveLastSpace(string &s) {
		int i = s.size() - 1;		
		int j = 0;
		while (s[i] == ' ') {
			i--;
			j++;
		}
		if (i < s.size() )
			s.erase(i + 1, j);		
	}
};
