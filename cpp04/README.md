![til](https://media3.giphy.com/media/v1.Y2lkPTc5MGI3NjExem8zZ3dyODI2eHZqNnRueG43cWZlM2tnajdkdDY3dGVpbnRkdzg4dCZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/QUSNOQrN8mTzvGZlML/giphy.gif)

## CPP 04
---
by: Violeta Velandria

En este módulo se explora el polimorfismo de subtipos, el uso de funciones virtuales y clases abstractas.

### ex00
Uso de la palabra clave `virtual` en la clase 'Animal' para permitir el Dynamic Binding. Esto asegura que, al llamar a `makeSound()`, el compilador ejecute la versión de la clase derivada (Cat o Dog) y no la de la clase base.

### ex01
Implementación de la clase 'Brain' que contiene un array de 100 ideas. Se profundiza en el concepto de "copia profunda" (deep copy) en los constructores de copia y operadores de asignación de 'Cat' y 'Dog' para evitar duplicidad de punteros en memoria.

### ex02
Conversión de la clase 'Animal' en una clase abstracta (AAnimal) para evitar que pueda ser instanciada directamente, asegurando que solo los animales específicos (como perros o gatos) existan en el programa.

### ex03
Implementación de interfaces y gestión de materiales (Materia) mediante las clases abstractas 'AMateria', 'ICharacter' e 'IMaterialSource', practicando el diseño de sistemas modulares en C++.
