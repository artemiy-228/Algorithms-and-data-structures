### Stack in C++

The `stack<T>` class represents a stack - a data structure that operates on the principle of Last-In-First-Out (LIFO) - the last added element is always the first one to be extracted. 
A stack can be likened to a stack of items, for example, a stack of plates - plates are added on top, with each subsequent plate placed on top of the previous one. And when you need to take a plate, you first take the one that is at the very top (which was placed last).

#### Stack Operations:

- **Defining an empty stack (in this case, of strings):**

  * `std::stack<std::string> stack;`

- **Stack size and emptiness check:**

  * `empty()`: checks if the stack is empty.

  * `size()`: returns the number of elements in the stack.

- **Adding elements:**

  * `push(value)`: adds the element value to the top of the stack.

- **Accessing elements:**

  * `top()`: returns the element at the top of the stack (the last added element).

- **Removing elements:**

  * `pop()`: removes the element from the top of the stack.

[[Stack_RUS]]

