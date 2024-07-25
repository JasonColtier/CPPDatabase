# Smart pointers

> Smart pointers enable automatic, exception-safe, object lifetime management.

unique ptr :  a smart pointer that owns and manages another object through a pointer and disposes of that object when the unique_ptr goes out of scope.


shared ptr :  smart pointer with shared object ownership semantics 
weak ptr :   weak reference to an object managed by std::shared_ptr 