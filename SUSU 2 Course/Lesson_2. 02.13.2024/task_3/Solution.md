```cpp
#include <iostream>
#include <stack>
#include <string>

using namespace std;

template<typename T>
class Queue{
private:
   stack<T> a;
   stack<T> b;
   void move(){
      while(!a.empty()){
         b.push(a.top());
         a.pop();
      }
   }
public:
   int size() {return a.size() + b.size();}
   void push(T t) {a.push(t);}
   void pop(){
      if(b.empty()) move();
      b.pop();
   }
   
   const T& front(){
      if(b.empty()) move();
      return b.top();
   }
};

```
[[Condition]]
