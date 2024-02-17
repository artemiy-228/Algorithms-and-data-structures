### Vectors in C++

Vectors represent dynamic arrays with automatic memory expansion. They are part of the C++ Standard Template Library and are accessible through the `<vector>` header file.

Adding a new element to a vector occurs in O(1) time if there is enough space, otherwise in O(n) time. Initially, a doubled vector is created, and then the values of the previous vector will be copied there.

#### Basic operations with vectors:

- **Adding elements**:
  - `push_back(value)`: adds the element `value` to the end of the vector.
  - `emplace_back(args...)`: adds an element to the end of the vector, constructing it from the arguments `args...`.
  
- **Adding elements at a specific position**:
  - `emplace(pos, value)`: inserts the element `value` at the position indicated by the iterator `pos`.
  - `insert(pos, value)`: inserts the element `value` at the position indicated by the iterator `pos`.
  - `insert(pos, n, value)`: inserts `n` elements of `value` starting from the position indicated by the iterator `pos`.
  - `insert(pos, begin, end)`: inserts elements from the range between the iterators `begin` and `end` starting from the position indicated by the iterator `pos`.
  - `insert(pos, values)`: inserts a list of values starting from the position indicated by the iterator `pos`.
  
- **Removing elements**:
  - `clear()`: removes all elements from the vector.
  - `pop_back()`: removes the last element from the vector.
  - `erase(p)`: removes the element pointed to by the iterator `p`.
  - `erase(begin, end)`: removes elements from the range starting from the iterator `begin` up to the iterator `end`.
  
- **Changing the size of the vector**:
  - `resize(n)`: changes the size of the vector to `n`.
  - `resize(n, value)`: changes the size of the vector to `n` and fills the new elements with the value `value`.
  
- **Changing elements**:
  - `assign(args...)`: replaces all elements of the vector with the specified values or a set of values.
  - `swap(other)`: swaps the values of two vectors.

- **Comparing vectors**:
  - Vectors can be compared using comparison operations: `<`, `>`, `<=`, `>=`, `==`, `!=`. They are considered equal if they contain the same elements in the same positions.

[[Vector_RUS]]

