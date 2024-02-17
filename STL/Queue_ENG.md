### Queue in C++

The `std::queue<T>` class represents a queue - a container that operates on the principle of First-In-First-Out (FIFO) - the first added element is always the first one to be extracted. It is a container analogous to the standard queue, which is commonly encountered in our daily lives.

#### Queue Operations:

- **Defining an empty queue (in this case, of strings):**

  * `std::queue<std::string> queue;` // empty queue

- **Queue size and emptiness check:**

  * `empty()`: checks if the queue is empty.
  * `size()`: returns the number of elements in the queue.

- **Adding elements:**

  * `push(value)`: adds the element value to the back of the queue.

- **Accessing elements:**
  * `front()`: returns the first element in the queue.
  * `back()`: returns the last element in the queue.

- **Removing elements:**
  * `pop()`: removes the first element from the queue.

[[Queue_RUS]]

