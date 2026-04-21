![til](https://media4.giphy.com/media/v1.Y2lkPTc5MGI3NjExaGpuNjdwZXhhN3JzeWQ4YWlyZGJodmZrN2Z3eTRiYmc1ZzQyM3IxbiZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/qhkR7mkPgnvQ4/giphy.gif)

## CPP 01
---
by: Violeta Velandria

En este módulo se profundiza en la asignación de memoria (stack vs heap), referencias, punteros a miembros y manipulación de archivos.

### ex00
Implementación de la clase 'Zombie'. Se explora la creación de objetos en el stack (función `randomChump`) y en el heap (función `newZombie`), entendiendo cuándo es necesario que el objeto sobreviva al alcance de la función.

### ex01
Creación de una horda de zombies en un único bloque de memoria utilizando `new[]`. Cada zombie de la horda debe ser inicializado con un nombre específico.

### ex02
Introducción a las referencias en C++. Un ejercicio para distinguir entre un string, un puntero al string y una referencia al mismo, observando que todos apuntan a la misma dirección de memoria.

### ex03
Uso de referencias y punteros mediante las clases 'HumanA', 'HumanB' y 'Weapon'. 'Weapon' tiene un tipo (string) y métodos para obtenerlo y cambiarlo. Se diferencia cuándo un atributo debe ser una referencia (siempre presente) o un puntero (puede ser nulo).

### ex04
Programa que toma un nombre de archivo y dos cadenas (s1 y s2). Lee el contenido, reemplaza cada ocurrencia de s1 por s2 y guarda el resultado en un archivo `.replace`. Se prohíbe el uso de `std::string::replace`.

### ex05
Uso de punteros a funciones miembro en la clase 'Harl' para evitar estructuras repetitivas de `if/else` al gestionar diferentes niveles de quejas (DEBUG, INFO, WARNING, ERROR).
