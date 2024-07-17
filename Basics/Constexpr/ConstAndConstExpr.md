>permet de déclarer une info qui est définie à la compilation

**Best practice**

Any variable that should not be modifiable after initialization and whose initializer is known at compile-time should be declared as `constexpr`. Any variable that should not be modifiable after initialization and whose initializer is not known at compile-time should be declared as `const`.

In C++, both **`const`** and **`constexpr`** are used to specify values that cannot be modified at runtime. However, there are some key differences between the two:

1. **`const`** is used to declare variables whose values cannot be modified at runtime. It can be applied to variables, functions, parameters, and class members. The value of a **`const`** variable is determined at runtime and cannot be changed once it is initialized.

Example:

```cpp
const int x = 10; // x is a const variable with a value of 10
```

1. **`constexpr`** is used to declare values that can be evaluated at compile-time. It can be applied to variables, functions, and constructors. The value of a **`constexpr`** variable must be known at compile-time and cannot be changed at runtime.

Example:

```cpp
constexpr int y = 20; // y is a constexpr variable with a value of 20

```

1. **`constexpr`** can be used in contexts where **`const`** cannot, such as array sizes, switch statements, and template arguments.

In summary, **`const`** is used to declare runtime constants, while **`constexpr`** is used to declare compile-time constants. **`constexpr`** can be used in more contexts than **`const`**, and it is generally preferred for values that can be evaluated at compile-time.