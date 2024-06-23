

## Q-1: Why do you think linked-list requires more memory than an array when storing the same number of elements?

### 📑📑 Ans:

linked lists generally require more memory compared to arrays for storing the same number of elements. Here's a breakdown of why:

#### Array Memory Usage:

Arrays store elements contiguously in memory. This means all elements are allocated right next to each other in a single block.
Each element only needs its own data storage.
No additional overhead is required for linking elements.

#### Linked List Memory Usage:

Linked lists store elements in non-contiguous memory locations. Each element (node) is a separate object.
Each node stores:
The data itself.
A pointer (or multiple pointers in some cases) to the next node in the list.
This pointer adds extra memory overhead to each node compared to an array element.

#### Here's a table summarizing the memory usage:

Data Structure -> Memory per Element

Array -> Size of the data type

Linked List -> Size of the data type + Size of the pointer(s)

</hr>

#### Example:

If each element in an array and a linked list is an integer (4 bytes), the linked list node might need an additional 4 or 8 bytes for the pointer (depending on the system architecture).

#### Additional Factors:

While the pointer overhead is the main reason, there could be slight memory overhead for managing the linked list itself (e.g., a head pointer).
The difference in memory usage might be less significant for very small data types, but it becomes more noticeable as the data size increases.

## Q-2: Write down Three Limitations of the array which can be solved by the use of Linked List

### 📑📑 Ans:

Three Limitations of Arrays Addressed by Linked Lists in C++

1. Fixed Size:

   Arrays in C++ have a predetermined size declared at creation. This can be problematic if you don't know the exact amount of data you'll need beforehand or if the data size needs to change dynamically during program execution.

     Solution with Linked Lists: 

    Linked lists are dynamic data structures. Each node contains data and a pointer to the next node, allowing the list to grow or shrink as needed. You can insert or delete elements at any point without reallocating the entire structure.

2. Inefficient Insertion and Deletion (Except at the End):

Inserting or deleting elements in the middle of an array requires shifting remaining elements to accommodate the change. This operation can be time-consuming, especially for large arrays.

     Solution with Linked Lists: 

    Inserting or deleting elements in a linked list involves modifying only the pointers of the affected nodes. No data shifting is necessary, making these operations much faster, especially for insertions and deletions in the middle.

3. Memory Wastage: 

Arrays allocate memory for the declared size, even if not all elements are used. This can lead to wasted memory if the actual data size is less than the allocated size.

     Solution with Linked Lists: 

    Linked lists only allocate memory for the nodes that hold the data. Unneeded nodes can be deallocated, minimizing memory waste.

</hr>
