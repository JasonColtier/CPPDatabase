# Implicit Conversion

https://www.learncpp.com/cpp-tutorial/implicit-type-conversion/

The standard conversions can be broadly divided into 4 categories, each covering different types of conversions:

* Numeric promotions (covered in lesson 10.2 -- Floating-point and integral promotion)
  * convert from a smaller type to a bigger type. it is **value preserving**
* Numeric conversions (covered in lesson 10.3 -- Numeric conversions) 
  * potentially **unsafe**
  * int to another integral type (short, char, long, unsigned...)
  * double to another floating type (float)
  * floating type to int
  * int to floating type
  * integral type or floating type to bool
* Arithmetic conversions (covered in lesson 10.5 -- Arithmetic conversions)
* Other conversions (which includes various pointer and reference conversions)