

#include <iostream>
#include <stack>

using namespace std;


int main(){
   int size;
   cin >> size;
   stack<int> s;
   for(int i = 0; i < size; i++){
      int t;
      cin >> t;
      s.push(t);
   }
   while(!s.empty()){
      cout << s.top() << ' ';
      s.pop();
   }
}