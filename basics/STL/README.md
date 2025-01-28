## STL
The C++ Standard Template Library (STL) is a collection of generic classes and functions designed to provide reusable components. 
It allows developers to work with data structures and algorithms efficiently.

# Components of STL
The STL is divided into four main components:

# Containers
Containers are objects that store data. They are classified into three types:

1. Sequence Containers: Store data in a linear sequence.
Examples: vector, deque, list, array, forward_list
2. Associative Containers: Store data in a sorted manner, allowing for quick lookup.
Examples: set, multiset, map, multimap
3. Unordered Associative Containers: Store data in an unordered manner using hash tables.
Examples: unordered_set, unordered_multiset, unordered_map, unordered_multimap
4. Container Adapters: Modify container interfaces for specific uses.
Examples: stack, queue, priority_queue

# Iterators
Iterators are objects that point to elements in containers. They allow traversal of the elements in a container.
Common types of iterators:

1. Input Iterator: Reads data from a container.
2. Output Iterator: Writes data to a container.
3. Forward Iterator: Moves forward through a container.
4. Bidirectional Iterator: Moves forward and backward.
5. Random Access Iterator: Provides random access (e.g., vector).

# Algorithms
Algorithms are functions that perform operations on data stored in containers.

Examples:
1. Searching: find, binary_search
2. Sorting: sort, stable_sort
3. Modifying: copy, replace
4. Others: accumulate, count, unique
5. Functors (Function Objects)
Functors are classes that overload the () operator, making objects behave like functions. They are used in conjunction with STL algorithms for customization.
Example: std::less, std::greater

# Advantages of STL
1. Reusability: Predefined classes and algorithms reduce code redundancy.
2. Efficiency: STL components are optimized for performance.
3. Flexibility: Supports generic programming using templates.
4. Standardization: Provides a consistent and predictable interface.
