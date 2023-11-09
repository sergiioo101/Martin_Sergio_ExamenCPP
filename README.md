# examen1
https://github.com/sergiioo101/Martin_Sergio_ExamenCPP.git

#### PARTE 1
1. d) Todas las anteriores
2. b) Un archivo que ayuda a gestionar y automatizar la compilación de proyectos de programación
3. b) Variables que almacenan la dirección de otra variable

#### PARTE 2
1. Operaciones Básicas - ejercicio1
2. Gestión de Estudiantes - ejercicio 2
3. Optimización de Memoria - ejercicio 3
4. Manejo de Excepciones - ejercicio 4
5. Registro de Materias - ejercicio5
6. Promedio del Estudiante - ejercicio6
7. Manejo de Ausencias - ejercicio7
8. Filtrado de Estudiantes por Grado - ejercicio8
9. Gestión de Excepciones Personalizadas - ejercicio9
10. Registro de Profesores - ejercicio 10
- Los ejercicios los he realizado con informacion sacada de los apuntes y de ChatGPT

#### PARTE 3
1.
La Programación Orientada a Objetos (POO) destaca la organización en torno a objetos para encapsular datos y funciones, fomentando la modularidad y reutilización del código. En cambio, la Programación Procedimental se centra en funciones que manipulan datos de manera más lineal. C++ ofrece un soporte integral para ambos paradigmas al permitir la creación de clases y objetos para la POO, así como la escritura de funciones y procedimientos en el enfoque procedural. Esta dualidad en C++ proporciona flexibilidad, permitiendo a los desarrolladores elegir la aproximación que mejor se ajuste a los requisitos específicos del proyecto.

2. 
Propagación de una excepción:
En C++, la propagación de excepciones se refiere al proceso mediante el cual una excepción lanzada en una función busca un bloque catch correspondiente en la cadena de llamadas. La excepción se propaga ascendiendo por la pila de llamadas hasta encontrar un bloque catch capaz de manejarla. Este mecanismo permite que las excepciones se gestionen en el nivel más apropiado, brindando flexibilidad en la respuesta a situaciones excepcionales.

Excepción no capturada:
Si una excepción lanzada no es capturada por ningún bloque catch en la cadena de llamadas, el programa experimenta un comportamiento indefinido. En la práctica, esto suele resultar en la terminación del programa y, en algunos casos, puede generar mensajes de error o informes de fallos. La correcta captura y gestión de excepciones son fundamentales para garantizar la estabilidad y previsibilidad del programa, evitando problemas inesperados durante la ejecución.

3.
Adquisición de Recursos en C++:
La "adquisición de recursos" en C++ implica obtener y reservar recursos como memoria dinámica, archivos, conexiones de red u otros recursos del sistema durante la ejecución del programa. Se realiza mediante operaciones como new, malloc, o funciones de apertura de archivos, según el tipo de recurso que se esté adquiriendo.

Importancia y Relación con la Gestión de Excepciones:
La gestión de recursos es crítica para evitar problemas como fugas de memoria o fallas en la manipulación de archivos. En el contexto de la gestión de excepciones, se vuelve esencial garantizar que, incluso si se produce una excepción durante la ejecución del programa, los recursos adquiridos se liberen de manera adecuada. Esto evita posibles pérdidas de recursos y contribuye a la estabilidad del programa. La relación con la gestión de excepciones se evidencia al utilizar bloques try y catch para manejar situaciones excepcionales. En este contexto, el principio RAII (Recurso Adquirido es Recurso Liberado) es común en C++. Consiste en utilizar objetos para encapsular la lógica de adquisición y liberación de recursos. Estos objetos aseguran que los recursos se liberen automáticamente cuando el objeto sale de alcance, incluso si se lanza una excepción. Esto simplifica la gestión de recursos y mejora la confiabilidad del código, especialmente en entornos propensos a excepciones.
