![til](https://i.giphy.com/12HZukMBlutpoQ.webp)

## CPP 02
---
by: Violeta Velandria

Este módulo introduce los fixed point numbers, la sobrecarga de operadores y la Forma Canónica de Ortodoxa.

### ex00
Implementación de una clase 'Fixed' que representa un número de punto fijo. Incluye la Forma Canónica de Ortodoxa: constructor por defecto, de copia, operador de asignación y destructor. Maneja los bits crudos del valor con `getRawBits` y `setRawBits`.

### ex01
Ampliación de 'Fixed' para incluir constructores que conviertan valores enteros y flotantes a punto fijo, y una sobrecarga del operador `<<` para imprimir el valor convertido a flotante.

### ex02
Sobrecarga de operadores de comparación (>, <, ==, etc.), aritméticos (+, -, *, /) e incremento/decremento (pre y post) para la clase 'Fixed'. Además, incluye funciones estáticas para encontrar el mínimo y máximo entre objetos.

### ex03
Implementación de la función `bsp` (Binary Space Partitioning) para determinar si un punto está dentro de un triángulo, utilizando la clase 'Point' y la lógica de punto fijo desarrollada.
