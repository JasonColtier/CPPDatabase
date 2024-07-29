# Inline
Inline expansion is a process where a function call is replaced by the code from the called function’s definition.

The inline keyword is just a hint -- the compiler is completely free to ignore a request to inline a function. This is likely to be the result if you try to inline a lengthy function! The compiler is also free to perform inline expansion of functions that do not use the inline keyword as part of its normal set of optimizations.

> **Best practice** 
> 
> Do not use the inline keyword to request inline expansion for your functions.
> 
> Modern optimizing compilers are typically good at determining which function calls should be made inline -- better than humans in most cases. As a result, the compiler will likely ignore or devalue any use of inline to request inline expansion for your functions.
