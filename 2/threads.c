/*
 * File: threads.c
 *
 * Description: Ejemplo sencillo de creación de threads en C - POSIX
 *
 * Author:  Intro_SW
 * Version: 0.1
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define THREADS_NUMBER  8

const char *messages[THREADS_NUMBER] = {"English: Hello World!", 
                                        "French: Bonjour, le monde!",
                                        "Spanish: Hola mundo!",
                                        "German: Guten Tag, Welt!",
                                        "Russian: Zdravstvuyte, mir!",
                                        "Japan: Sekai e konnichiwa!",
                                        "Latin: Orbis, te saluto!",
                                        "Portuguese: Ola mundo"
                                       };
/*
 * La funcion print_hello contiene el codigo a ejecutar por cada thread   
 */
void *print_hello (void *args)
{
    // TODO
    NULL;
}
/*
 * Este es el código que ejecuta el thread principal   
*/
int main (int argc, char *argv[])
{
    // TODO

    printf ("App finished.\n");  // Ultimo texto en salir por pantalla
    return 0;
}
