/*
* Informa la cantidad de l�neas, la cantidad de caracteres a la entrada y la longitud promedio de las l�neas
* Fabiana Maria Anahi Ramirez
* 10/05/2015
*/

#include <stdio.h> /* getchar EOF feof perror printf */
#include <stdlib.h> /* EXIT_SUCCESS */

int main(void){
    int nl;  /* la cantidad de lineas */
    int nc;  /* la cantidad de caracteres */
    int c;   /* el caracter leido */

    for(nl = 0, nc = 0; ( c = getchar()) != EOF;)
        c == '\n' ? ++nl : ++nc;

    if( !feof(stdin) )
        perror("No se pudo seguir leyendo de la entrada debido a un error");

    printf("Cantidad de l�neas: %d\nCantidad de caracteres a la entrada: %d\nLongitud promedio: %.1f\n", nl, nc, nl >0 ? nc / (float)nl: 0);

    return EXIT_SUCCESS;
}
