<<<<<<< HEAD
/* Módulo de arranque de la aplicación 
int main(int argc, char *argv[]){


Tutorial: Programar con paso de argumentos

Publicado por Angel Ferreira en Jueves, febrero 16, 2012
Uncategorized	

Cuando un aspirante a programador comienza a aprender los fundamentos de algún lenguaje, comúnmente practica lo aprendido mediante ejercicios simples como el “Hola Mundo”, calculadoras, juegos de azar, procesamiento de caracteres, entre otros.

¿Quién no recuerda sus primera calculadora programada? Típicamente muchos piden la entrada al usuario con un menú de este estilo:
***CALCULADORA***
Inserte opción:
1 Suma
2 Resta
3 Multiplicación
4 División

Entonces procedemos a pedir el primer número, luego el segundo y finalmente imprimimos el resultado. Pero, ¿y si pudiéramos hacer todo esto sin la necesidad de imprimir un menú y con un sólo comando al momento de invocar al programa?

Tomemos por ejemplo algunos programas conocidos que corren desde línea de comandos. A muchos alguna vez se nos ha descompuesto el bendito Windows y para repararlo hemos usado desde la consola de recuperación una herramienta llamada chkdsk. Nosotros mandamos un comando parecido a:
chkdsk C: /R

Y el programa se ejecuta y repara el disco, sin pedirnos más interacción. O en Linux, donde probablemente todos han tenido que hacer algo como superusuario:
sudo mount -t ntfs /media/disk/ /home/usuario/disk/
¿Cómo lograr esta manera de pedir parámetros a nuestro usuario sin ninguna clase de menú o interfaz? Podemos hacerlo a través de una técnica llamada Paso de Argumentos. Es más fácil de lo que parece. Para esto, tenemos que fijarnos en nuestra conocida función main.

El paso de argumentos funciona distinto en cada lenguaje. En esta ocasión revisaremos el paso de argumentos en  C/C++ El principio es sencillo: todos los argumentos del programa se pasan como cadenas de texto con las cuales hacemos decisiones dentro de nuestro programa.

 

Muchos de los programas básicos que vienen en los libros tienen la siguiente estructura:
int main(){
//cuerpo de la función
}
Podemos observar que en este caso, la función main no recibe parámetros. Aquí es donde entra el paso de argumentos. Después de todo, la función main es el punto de entrada en la ejecución de nuestro programa, así que es natural que los argumentos de inicio van aquí. El esqueleto de un main en C con paso de argumentos es el siguiente:

int main(int argc, char *argv[]){
//cuerpo de la función
}

argc significa argument count. El contenido de este entero es la cantidad de parámetros que recibe el programa, más el nombre del mismo programa, que siempre es el argumento cero.

argv significa argument values. Es un arreglo de cadenas (las cuales a su vez, en C, son arreglos de caracteres) que contiene las cadenas de texto  que le mandamos al programa. Su tamaño es argc.

NOTA: no es necesario que estrictamente se llamen “argc” y “argv”. Daría igual si les llamáramos “numeroArgumentos” y “valoresArgumentos”. O “Juan” y “Pedro”. Por convención se acostumbra llamarles “argc” y “argv”, pero lo importante es que main reciba un int y un arreglo de cadenas.

NOTA 2: Un arreglo de cadenas se puede expresar de diversas formas. Todas las siguientes son válidas:
char *argv[]
char **argv
char argv[][]
Es decir, si invocamos el programa “ejemplo” y le queremos mandar tres argumentos, “a”, “b” y “c”, la manera como quedarían argv y argc serían las siguientes:
ejemplo a b c
argc=4
argv[0]="ejemplo"
argv[1]="a"
argv[2]="b"
argv[3]="c"

Ya hecho esto, podemos acceder a los valores de los argumentos con el arreglo argv[]. Incluso podemos hacer otras cosas útiles como comprobar si el usuario insertó el número correcto de parámetros comprobando argc; en caso de estar mal, podemos avisar al usuario que debe introducir bien los argumentos del programa.
=======
/* ******************************************************
 * Para ejemplificar mejor lo anterior, hagamos una 
 * calculadora que realice las cuatro operaciones 
 * aritméticas básicas con enteros, a la cual llamaremos 
 * por línea de comandos con la forma: “calc [operando 1]
 * [operador] [operando 2]”
 * ******************************************************* */
/*
>>>>>>> Mary implements the Multiplication in calc
pero he hecho un GIT PULL --REBASE ORIGIN MASTER
así que ahora estoy combinando a mano el fichero main.c que 
había en el repositorio 'centralrepo' y el local de mary
*/

#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD


/*
Para ejemplificar mejor lo anterior, hagamos una calculadora que realice las cuatro operaciones aritméticas básicas con enteros, a la cual llamaremos por línea de comandos con la forma: “calc [operando 1] [operador] [operando 2]”
John implementa la suma

*/
int main(int argc, char *argv[]){
	/* Mary implementa la multiplicación */
  /* John implementa la suma */

   if(argc!=4){
      printf("USO CORRECTO: calc [operando 1] [+ | - | * | /] [operando 2]\n");
      exit(1); //Sale del programa si el usuario no introduce el número correcto de argumentos
     }
    int a=atoi(argv[1]);
    int b=atoi(argv[3]); //atoi convierte de cadena a entero
    int resultado;
    switch(argv[2][0]){ //accedemos al primer (único) caracter del argumento del signo
       case '+':
           resultado=a+b;
           break;
       case '*':
           resultado=a*b;
    }
   printf("%d %c %d = %d\n", a, argv[2][0], b, resultado); //Imprime el resultado
   return 0;

}
