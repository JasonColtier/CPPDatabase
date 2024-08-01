# include

When the preprocessor encounters a #include directive, it replaces the directive with the entire contents of the specified file. For example, if my_header.h contains the following code:

To prevent multiple inclusions of the same header file, which can cause redefinition errors, include guards are used. These typically look like this:

````c++
#ifndef MY_HEADER_H
#define MY_HEADER_H

// Contents of the header file

#endif // MY_HEADER_H

````
