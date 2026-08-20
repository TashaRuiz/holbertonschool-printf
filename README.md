# holbertonschool-printf

Este proyecto consiste en recrear la función printf de la biblioteca estándar de C.
El objetivo es escribir una función personalizada llamada _printf que produzca una salida según un formato
específico.

Que es print f: 
printf es una función de C que sirve para mostrar texto y valores en una pantalla. Con esta función puedes imprimir:
texto fijo
variables 
numeros
caracteres
cadenas de texto

Esta función sirve para formatear e imprimir datos en la salida estandar.

En este proyecto escribimos una función llamada print f que acepta una cadena de formato y argumentos
variables que imprime el resutlado en la salida estandar y devolviendo el numero total de caracteres impresos.
Requisitos Generales
Editor permitido: vi, vim, emacs.

Compilador: Ubuntu 20.04 LTS usando gcc con las opciones -Wall -Werror -Wextra -pedantic -std=gnu89.

Codigo debe seguir el estilo Betty. Se comprueba utilizando betty-style.pl y betty-doc.pl

No se permite el uso de variables globales.

Maximo 5 funciones por archivo.

Todos los prototipos deben estar en el archivo main.h y debe estar protegido contra inclusiones multiples.


Tarea 0: "I'm not going anywhere..."
Prototipo: int _printf(const char *format, ...);

Escribir una función que produzca una salida según un formato.
El número de caracteres impresos (excluyendo el byte nulo final).

c: Imprime un carácter.
s: Imprime una cadena.
%: Imprime el símbolo de porcentaje.

No es necesario reproducir el manejo de búfer de la función printf original, ni manejar flags, precisión, ancho de campo o modificadores de longitud.

Tarea 1: Manejo de Enteros
Implementar la capacidad de manejar los especificadoes de conversion de enteros 
Imprimir un entero decimal y un entero.

Tarea 2 Manejo de Binarios
Implementar el especificador de conversion para imprimir numeros en biniario
Convertur el argumento unsifned int a binario.
