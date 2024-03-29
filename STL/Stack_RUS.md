### Stack в С++

Класс `stack<T>` представляет стек - структуру данных, которая работает по принципу LIFO (last-in first-out или "последний вошел — первым вышел") — первым всегда извлекается последний добавленный элемент. 
Стек можно сравнить со стопкой предметов, например, стопкой тарелок - тарелки добавляются сверху, каждая последующая тарелка кладется поверх предыдущей. А если надо взять тарелку, то сначала берется та, которая в самом верху (которую положили самой последней).

#### Операции со стеком:

- **Определение пустого стека (в данном случае строк):**

  * `stack<std::string> stack;`

- **Размер стека и проверка на пустоту:**

 * * `empty()`: проверяет, пуст ли стек.

  * `size()`: возвращает количество элементов в стеке.

- **Добавление элементов:**

  * `push(value)`: добавляет элемент value в вершину стека.

- **Получение элементов:**

  * `top()`: возвращает элемент, находящийся в вершине стека (последний добавленный элемент).

- **Удаление элементов:**
 *  `pop()`: удаляет элемент из вершины стека.

[[Stack_ENG]]
  
  



