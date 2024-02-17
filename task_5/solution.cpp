#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool correct(string s) {
	stack<char> st;

	for (char symbol : s) {
		if (c == '(' || c == '{' || c == '[') { 
			st.push(c); 
		}
		else{
			if (st.empty() || (open.find(st.top()) - open.begin()) != close.find(c) - close.begin()) {
				return false;
			}
			else {
				st.pop();
			}
		}
	}
	return st.empty();
}