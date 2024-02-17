#include <stack>
#include <string>
#include <iostream>

using namespace std;

int main(){
   int a, b;
   stack<int> st;
   string s;
   while(cin >> s){
      if ((s == "+") || (s == "-") || (s == "*")){
         a = st.top();
         st.pop();
         b = st.top();
         st.pop();
         if(s == "+") st.push(a + b);
         if(s == "-") st.push(a - b);
         if(s == "*") st.push(a * b);
      }
      else{
         st.push(stoi(s));
      }
   }
   cout << st.top();
}