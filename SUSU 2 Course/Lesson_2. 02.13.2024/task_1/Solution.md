```cpp
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
```

[[SUSU 2 Course/Lesson_2. 02.13.2024/task_1/Condition]]






