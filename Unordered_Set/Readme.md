## 📌 Unordered Set in C++

`unordered_set` is an **unordered associative container** that stores **unique elements**.

Unlike `set`, it stores its elements using **hashing**.  
This provides **average constant-time `O(1)`** operations for:

- search
- insert
- delete

However, the elements are **not sorted** in any particular order.

**1. Inserting Elements**

`unordered_set <int> us2 = {1, 2, 3, 4, 5}` creates the unordered set using the initialization list.
 
or,

`unordered_set_name.insert (Value)`

or,

`unordered_set_name.insert (InputIterator first, InputIterator last)`

**Note**

An `unordered_set<int>us` declared without any elements is just an `empty container`, not initialized with any default or garbage values.

`unordered_set_name.insert(first, last)` inserts elements in the range `[first, last)`.
That means it includes the element pointed by first, but excludes the one pointed by last.



The `insert()` function in unordered_set returns a pair:  `pair`<iterator, bool>
                                                         
- `first` → an iterator to the element (either newly inserted or already present).

- `second` → a boolean:

    - **true** if the element was inserted successfully

    - **false** if the element was already present (and not inserted again)


**2. Accessing Elements**
We can’t access elements of an unordered set by index like in an array or vector. We have to increment or decrement iterator obtained from begin() or end() methods respectively to access the element by position. This can also be done with the help of next() or advance() function.

**3. Updating Elements**
In `unordered set`, the value of the elements cannot be changed after it is inserted.

**4. Finding Elements**
Unordered set provides` fast search by value` operation using the `find()` member function. This function returns `iterator to the element if found`, otherwise returns `end() iterator`.

**5. Traversing**
`Unordered set` can be traverse either `range-based for loop/for-each loop` or `using begin() and end() iterator` in a loop.

**6. Deleting Elements**
Elements can be removed from the unordered set using `erase()` method. We can erase elements either by `value` or by `position`.


`Operation	Time Complexity`

**Insert** an element	- O(1) (average)
**Delete** an element	- O(1) (average)
**Access element by `position`** - O(n)
**Find element by `value`**	- O(1) (average)
**Traverse the set** - O(n)

`Worst Case Time Complexity (O(n))`

All operations can degrade to O(n) in the worst case when:

- There are many hash collisions
- The hash function performs poorly
- The load factor becomes too high (triggering a rehash)


`Overall Space Complexity: O(n)`

Worst Case: O(n)
Average Case: O(n)