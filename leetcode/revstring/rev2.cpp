/*
http://oj.leetcode.com/problems/reverse-words-in-a-string/
*/

#include <iostream>
#include <sstream>

class Solution {
	public:
		void reverseWords(string &s) {
			using namespace std;
			string token;
			stringstream ss(s);
			s.erase();
			while(ss >> token) s.insert(0, token+" ");
			s = s.substr(0,s.size()-1);
		}
};
