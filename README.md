# Taller-Arreglos-Felipe-Amador

El código en python empieza pidiendole al usuario que seleccione una opción las cuales son: 
"1. Agregar vértice 2. Agregar cara 3. Ver figura 4. Salir"
El usuario debe empezar ingresando la opción "1" para que el sistema le pida los 3 puntos del vertice.
Después de poner las coordenadas de los vertices el usuario debe seleccionar la opción "2" para agregar las caras de la figura.
Con la opción "3" el sistema mostrará las coordenadas de las caras y los vertices que se han puesto hasta el momento.
La opción 4 reiniciará o cerrará el proceso.

Estructuras: Se usan condicionales como if, elif, y else para que el sistema tome desiciones dependiendo de lo que le diga el usuario.
Se usan listas con v = [] y c = [] para almacenar datos.
Se usa un loop como el while true para que el sistema repita la actividad a menos que el usuario ingrese la opción 4.
El for sirve para recorrer los datos que se ingresan tanto a las caras como a los vertices y asi evitar añadir lineas de código
El input () sirve para que el usuario ingrese los datos que se le piden
El split () sirve para dividir los 3 numeros que entra el usuario entre x, y & z.
El append sirve para ampliar las listas
El ennumerate sirve para asignar un numero a cada vertice y cada cara.


El código en C++ empieza pidiéndole al usuario que seleccione una opción de un menú:

Agregar vértice

Agregar cara

Ver figura

Salir

El usuario debe empezar ingresando la opción 1 para que el sistema le pida las coordenadas x, y, z del vértice.
Luego, debe seleccionar la opción 2 para ingresar las caras, que son combinaciones de los vértices ingresados.
Con la opción 3, el sistema muestra todas las coordenadas de los vértices y las caras que se han agregado hasta el momento.
Finalmente, la opción 4 termina el programa.

Estructuras Utilizadas en el Código


Se usan para que el programa tome decisiones según la opción que elija el usuario.

Se evalúa cada número ingresado y se ejecuta el bloque de código correspondiente.



Se utilizan para almacenar los datos ingresados.

v[100][3]: Guarda hasta 100 vértices, cada uno con x, y, z.

c[100][10]: Guarda hasta 100 caras, cada una con hasta 10 vértices.



while (true): Permite que el programa se repita continuamente hasta que el usuario elija la opción "4".

for: Se usa para recorrer los datos ingresados y evitar escribir muchas líneas de código manualmente.



Se usa para que el usuario ingrese valores desde el teclado.

Se utiliza en varias partes del código para recibir las coordenadas de los vértices y los índices de las caras.



Cuando el usuario agrega una cara, ingresa los índices de los vértices que la forman.

Cada cara se almacena con un "-1" al final para indicar que no hay más vértices en esa cara.

Paso a Paso

El código inicia un while(true) para que se repita hasta que el usuario elija salir.

Se imprime el menú de opciones y el usuario elige un número.

Si elige "1", se ingresan las coordenadas x, y, z de un nuevo vértice y se guarda en el array v[][].

Si elige "2", el usuario debe ingresar cuántos vértices tiene la cara y luego los índices de esos vértices.

Si intenta ingresar una cara sin vértices, el programa le avisa que primero debe agregar vértices.

Si ingresa más de 10 vértices en una cara, el programa le avisa que el máximo es 10.

Si elige "3", el programa muestra todos los vértices y caras guardadas hasta el momento.

Si elige "4", el programa muestra un mensaje de despedida y termina.

Si ingresa un número inválido, el programa muestra un mensaje de error y vuelve a pedir una opción.


