![OperatorsOverloading.jpg](OperatorsOverloading.jpg)

```cpp
MyClass operator+(MyClass &obj) {
   MyClass res;
   res.var= this->var+obj.var;
   return res; 
  }
```

On déclare une fonction dans une classe de telle façon

Cette fonction en exemple permet d'ajouter deux objets MyClass entre eux en additionnant leur variable var

On peut aussi customizer la façon dont marche l’operator pour lui faire faire autre chose exemple :

```cpp
bool operator-(int i){
            cout<<"test"<<endl;
            return true;
        }
```