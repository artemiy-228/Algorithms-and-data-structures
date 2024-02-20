```cpp
#include <iostream>  
#include <stack>  
  
using std::cout, std::cin, std::string, std::stack;  
  
int main() {  
    stack<string> words;  
    string word;  
    while(cin >> word){  
        words.push(word);  
    }  
    while(!words.empty()){  
        cout << words.top() << ' ';  
        words.pop();  
    }  
}
```
[[Condition]]
