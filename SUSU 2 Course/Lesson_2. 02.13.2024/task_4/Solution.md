```cpp
#include <iostream>
#include <queue>

using namespace std;

int main() {
	queue<int> a, b;
	int n, counter = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		a.push(x);
	}
	for (int i = 0; i < n; i++) {
		cin >> x;
		b.push(x);
	}
	while (!a.empty()) {
		if (a.front() == b.front()) {
			a.pop();
			b.pop();
		}
		else {
			a.push(a.front());
			a.pop();
		}
		counter++;
	}
	cout << counter;
}
```
[[Condition]]
