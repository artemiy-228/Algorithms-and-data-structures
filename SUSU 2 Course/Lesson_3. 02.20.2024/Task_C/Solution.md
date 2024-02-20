```cpp
void delall(list<int> &s, int v){  
    auto it = s.begin();  
    while(it != s.end()){  
        if(*it == v)  
            it = s.erase(it);  
        else  
            it++;  
    }  
}
```
[[Condition]]
