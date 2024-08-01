# Unsigned

When you compare a signed and an unsigned variable, C++ automatically converts the signed variable to an unsigned type if the unsigned type can represent all the values of the signed type. This can lead to unexpected results, especially if the signed variable has a negative value.