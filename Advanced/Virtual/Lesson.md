# Virtual Functions

💡 une fonction déclarée comme virtuelle dans la classe base pourra être appelée à travers un pointeur ou une référence (de type base) d’une classe qui dérive de base (A* a {&b}) et résoudra au runtime la version la plus dérivée (appellera l’override de la classe B)
On parle alors de runtime polymorphisme

Le mot clé virtuel permet d'appeler la fonction fille à partir d'un pointeur de du type de la classe mère

>⚠️ Si une fonction est virtuelle, le destructeur DOIT être virtuel. (si aucune fonction virtuelle alors non)

[18.2 — Virtual functions and polymorphism](https://www.learncpp.com/cpp-tutorial/virtual-functions/)

[Virtual Function in C++ - GeeksforGeeks](https://www.geeksforgeeks.org/virtual-function-cpp/)