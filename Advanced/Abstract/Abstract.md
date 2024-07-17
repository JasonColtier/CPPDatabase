# Abstract

Une classe est abstraite quand on a une fonction virtuelle =0

````cpp
virtual void foo() = 0;
````

Cela veut dire que cette fonction devra être implémentée dans une classe enfant.

La classe mère ne peut pas être instanciee car elle a une fonction virtuelle.

Elle peut être utilisée quand même comme pointeur afin de faire du polymorphisme.