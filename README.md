# Proyecto: Flight reservation system
Daniel Contreras Chávez A01710608

El proyecto va a consistir de un sistema de reservación de vuelos, los cuales van a estar almacenados y listados en un archivo csv, el usuario podrá ingresar su destino y además filtrar dichos vuelos por precio, hora de salida, o duración del vuelo y organizarlos manera descendente o ascendente.
Para lograr esto se utilizarán:
- listas anidadas
- Algoritmos de ordenamiento: Se usará un shell sort
- Algoritmos de búsqueda

## Descripción del avance 1
En este avance se definirán las bases para plantear el proyecto y los algoritmos que serán usados mediante la escritura de este archivo Readme.md y se empezará a crear una base de datos con vuelos.

## Instrucciones para compilar el avance de proyecto
Ejecuta el siguiente comando en la terminal:

`g++ main.cpp -o primer_avance` 

## Instrucciones para ejecutar el avance de proyecto
Ejecuta el siguiente comando en la terminal:

`./primer_avance` 

## Descripción de las entradas del avance de proyecto
*Escribe aquí la descripción de las entradas del proyecto, por ejemplo, si de entrada se requieren varios archivos, hay que indicar el formato de cada uno de ellos, y proporcionar un ejemplo de los datos de cada archivo.*

El proyecto requiere una entrada de archivoo de tipo csv, donde estarán guardados los vuelos, y sus características (nombre, duración, precio, hora de llegada/salida), cada una de estas estará separada por comas. Los datos serán strings, enteros (para la duración), y floats (para el precio y la hora de llegada/salida).

## Descripción de las salidas del avance de proyecto
*Escribe aquí la descripción de los resultados de la ejecución de tu programa.*

Las salidas dependerán de lo que quiera hacer el usuario, una vez elegida la destinación, se mostrarán los vuelos que tengan esa destinación, y ya dependiendo de si el usuario quiere filtrar los vuelos por precio, duración, u hora, obtendrá una lista con los vuelos ordenados de esa manera. Una vez seleccionado el vuelo, se generará un archivo de texto (ticket) donde saldrán los detalles del vuelo seleccionado por el usuario.

## Desarrollo de competencias

### SICT0301: Evalúa los componentes
#### Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa.
Escribe aquí tus argumentos sobre por qué consideras que has desarrrollado esta competencia y dónde se puede observar el desarrollo que mencionas.

Ya que se usará el shell sort que en el mejor de los casos tiene una complejidad de O(nlog (n)) y en el peor de los casos O(nlog(n)^2)

### SICT0302: Toma decisiones
#### Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente.
Escribe aquí tus argumentos sobre por qué consideras que has desarrrollado esta competencia y dónde se puede observar el desarrollo que mencionas.

Para este proyecto se usará el shell sort ya que es un algoritmo con una eficiencia bastante buena, y ya que se trabajará con bases de datos bastante grandes, no será tan difícil implementarlo, además, en el peor de los casos (O(nlog(n)^2)), se comporta mejor que otros ordenamientos como el bubble o el insertion sort, que en el peor de los casos son O(n^2).
