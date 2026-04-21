![til](https://media2.giphy.com/media/v1.Y2lkPTc5MGI3NjExb3ZxazhpYzd6cTEzbnppYXVrZTRpcHhwdTc5OTY5M3p3eDhka2J6YyZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/3oz8xz3nuHsRzDB5rW/giphy.gif)

## CPP 05
by: Violeta Velandria
---

En este módulo se pretende aprender a implementar los bloques try-catch

### ex00
Implementa la clase 'Bureaucrat', que tiene por atributos su 'name' y 'grade'.<br>
El grade puede incrementarse o decrementarse, lo que resultaría en sumarle o restarle 1. Para controlar errores se implementan dos excepciones: GradeTooHighException y GradeTooLowException. En ambos se hace un override del método what de la clase Exception para lanzar un mensaje predeterminado.
También pide hacer una sobrecarga del operador << para imprimir información de los burócratas

### ex01
En este ejercicio se añade la clase 'Form' y con ella los atributos de su nombre y un booleano de si está firmado o no así como dos grados que sirven para firmarlo y ejecutarlo.<br>
El método beSigned() cambia su estado a firmado solo si tiene el grado necesario y signForm() que intenta firmarlo, informando si pudo o no.

### ex02
Ahora se pide que Form sea una clase abstracta para dar lugar a tres clases hijas: ShrubberyCreationForm (crea un archivo dibujando árboles en ASCII), RobotomyRequestForm (simula una robotomía con 50% de probabilidad de éxito) y PresidentialPardonForm (anuncia un perdón presidencial)<br>
Los métodos de firmado anteriores ahora pasan a ser parte de la clase abstracta.

### ex03
El becario no tiene atributos pero tiene un método de makeForm()
