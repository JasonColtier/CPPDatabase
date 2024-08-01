# Union

In C++, a union is a special data type that allows you to store different data types in the same memory location

Unions are used to save memory when you need to store multiple data types but only one of them at any given time. Since a union shares the same memory for all its members, it only requires enough space to hold the largest member, thus optimizing memory usage.

**Considerations**

Safety: Using unions can be unsafe if not managed carefully, as it relies on the programmer to keep track of the active member. Accessing the inactive member leads to undefined behavior.

Modern Alternatives: Modern C++ provides safer alternatives like std::variant which offers a type-safe way of storing and accessing a union of different types.