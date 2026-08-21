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

Trabajo Tasha
main.h

The #indef MAIN_H and #define MAIN_H prevent the file form being included multiple times during complilation,
which could cause duplicate definition errors.

#include <unistd.h> //provides library access to systems call and low level OS operations.
the #endif closes the include guard lock.

//This proyect includes a set of custom printing utilities defined in main.h:

print_char(char c)- outputs a single character
print_string(char *str)- outputs a null-terminated string
print_number(int n)- Outputs an integer value.

Second Part Tashas Proyect
printf.h

This code defines two helper functions:
print_char
print_string

These are meant to back the %c and %s format specifiers. They use low level write () system instead of
puts or putchar.

print_char writes a single character and returns indicating one character was written.
print_string iterates though each character of the string and writes them one at a time to stdout.
It includes a NULL pointer. If the caller passes NULL, it substiutes the literal string.

The header gaurd standerd to include gaurd to prevent double inclusion in the header file.
Also holds main h which inlcudes the prototypes.


Trabajo Harry:

The main _printf.c

The function produces output according to a format string and supports a limited set of conversion specifiers.
It uses variadic arguments through stdarg.h and writes the output directly to the standard output stream using write(). 
The function returns the total number of characters printed. If format is NULL, or if the format string ends with a single %, the function returns -1.

Function Prototype:
int _printf(const char format, ...);

The "const charformat"

format is a string containing normal characters and optional format directives.

The "..." means that the function can accept a variable number of additional arguments.

Creating the Variables:
initialize with the header file "#include <stdarg.h>" but is already implement in the main.h that Tasha created.

1.va_list args;
    -Stores information needed to access the variable arguments.

2.va_start(args, format);
    -This initializes args so the function can access the additional arguments passed to _printf.

3.va_arg(args, int);
    -Retrieves the argument, It is retrieved as an int because of the default argument promotions in C.

4.va_end(args);
    -This cleans up the variable argument list. Whenever va_start() is used, va_end() should also be called before returning from the function.

The write() syntax:
initialize with the header file "#include <unistd.h>" but is already implement in the main.h that Tasha created.

write(1, "Hello", 5);

means:

1 → standard output (stdout)
"Hello" → data to write
5 → number of bytes to write

Therefore:

write(1, "%", 1);

writes one % character to standard output.

Everyones Description

This project implements a function called _printf() that produces formatted output according to a format string.

Prototype
int _printf(const char *format, ...);

The function writes its output to standard output (stdout) and returns the number of characters printed, excluding the null byte used to terminate strings.


The _printf function supports the following conversion specifiers:

%c-->    Prints a single character
%s-->    Prints a string
%%-->    Prints a percent sign
%d-->    Prints a decimal integer
%i-->    Prints an integer

Examples:

Character
_printf("Character: %c\n", 'A');

Output:
Character: A

String
_printf("Hello, %s!\n", "World");

Output:
Hello, World!

Percent sign
_printf("100%% complete\n");

Output:
100% complete

Decimal integer
_printf("Number: %d\n", 42);

Output:
Number: 42

Integer
_printf("Number: %i\n", -25);

Output:
Number: -25

Authors:
Milenys--> create the README.md and man page _printf()
Tasha--> create the header files: main.h and _printf.h
Harry--> create the main _pritnf.c
