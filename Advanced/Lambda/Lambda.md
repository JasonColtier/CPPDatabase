# Lambda

 >a convenient way of defining an anonymous function object (a closure) right at the location where it's invoked or passed as an argument to a function. Typically lambdas are used to encapsulate a few lines of code that are passed to algorithms or asynchronous functions

https://learn.microsoft.com/en-us/cpp/cpp/lambda-expressions-in-cpp?view=msvc-170
https://www.learncpp.com/cpp-tutorial/lambda-captures/

The capture clause is used to (indirectly) give a lambda access to variables available in the surrounding scope that it normally would not have access to. All we need to do is list the entities we want to access from within the lambda as part of the capture clause.

>The captured variables of a lambda are copies of the outer scope variables, not the actual variables.

Although lambdas look like functions, they’re actually objects that can be called like functions (these are called functors -- we’ll discuss how to create your own functors from scratch in a future lesson).

When the compiler encounters a lambda definition, it creates a custom object definition for the lambda. Each captured variable becomes a data member of the object.

At runtime, when the lambda definition is encountered, the lambda object is instantiated, and the members of the lambda are initialized at that point.

>To capture all used variables by value, use a capture value of =
> 
> To capture all used variables by reference, use a capture value of &

Try to avoid mutable lambdas. Non-mutable lambdas are easier to understand and don’t suffer from the above issues, as well as more dangerous issues that arise when you add parallel execution.