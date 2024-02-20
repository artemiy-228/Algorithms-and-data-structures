```cpp
void input(list<int>& s){  
    int size;  
    cin >> size;  
    for(int i = 0; i < size; i++){  
        int temp;  
        cin >> temp;  
        s.push_back(temp);  
    }  
}  
  
void print(list<int>& s){  
    cout << s.size() << '\n';  
    auto it = s.begin();  
    while(it != s.end()){  
        cout << *it << ' ';  
        it++;  
    }  
    cout << '\n';  
}
```
[[Condition]]
