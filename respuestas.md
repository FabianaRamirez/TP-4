#Respuestas del TP-4

##1.
* La primer expresión de la sentencia `for` de la funcion `main` itera hasta que c sea igual a la señal `EOF`. 
* La coma es un operador que no es conmutativo, esto se debe al orden de evaluación que es de izquierda a derecha. 
* La operación equivalente que existe es: `nl=nc=0`.

##2.
* Los parentésis son necesarios para la expresión `c=getchar()` ya que getchar() es una función. La misma devuelve el caracter que se halle en la entrada estándar. 
* Si no usamos los paréntesis el programa detecta un error en la pragmática del mismo. Sin los paréntesis no va a saber que estamos invocando a la función getchar. 

##3.
* La semántica de la sentencia `if` que está a continuación de la sentencia `for` es la siguiente: lo que primero se hace es evaluar la expresión del if, es decir, invocar a la función `feof` y pasarle como argumento stdin. Si es verdadero se invoca la función `perror` y se le pasa como argumento "No se pudo seguir leyendo de la entrada debido a un error". 
* La pragmática de la sentencia `if` que está a continuación de la sentencia `for` es la siguiente: lo que hace es ver si terminó o no con error y luego informarlo.

##4.
* La función `perror` transforma el número de error en la expresión entera de errno a un mensaje de error. Escribe una secuencia de caracteres al stream estándar de errores.

##5.
* La expresión equivalente es `ferror(stdin)`. Esta expresión determina si el flujo está en un estado erroneo o no.
* Las expresiones no son mutuamente excluyentes.
* La pragmática es ver si terminó con error o no y luego informarlo.

##6.
* Explicación del formato `%.1f`:
- `%` indica que comienza una especificación de conversión.
- `.1` indica que se va a imprimir 1 caracter después del punto decimal.
- `f` indica que se escribirá un número de punto flotante (float).

##7.
* En la expresión `nl` se aplica un casteo para obtener mayor precisión. Ya que lo que se quiere devolver es un float, se hace un cambio en el tipo de dato.

##10.
* Este programa no funciona correctamente para el caso vacío. Hay un inconveniente en la división por 0.

##11.
* La expresión que calcula el promedio no es precisa ya que cuenta los `\n`.

##12.
* Los cambios que se deben hacer son los siguientes:
```
for(nl = 0, nc = 0, (c = getchar()) != EOF;){
	if(c == '\n')
		++nl;
	else
		++nc;
}

printf("Cantidad de líneas: %d\nCantidad de caracteres a la entrada: %d\nLongitud promedio: %.1f\n", nl, nc, nl >0 ? nc / (float)nl: 0);
```