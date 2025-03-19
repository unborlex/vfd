El soft esta generado para arduino, en un ESP32, hay dos funciones principales para escribir en el display solo numeros y una es para escribir 8 digitos mas uno de simbolos 
y otra funcion donde se pueden escribir 4 digitos, en este caso se obtiene el doble de brillo ya que solo se multiplexa por 4.
La electronica consta de registros de dezplazamiento CD4094 funcionando en 18,5V elevando los 5V del ESP32 con un MC34063 y aislando las entradas con transistores para funcionar con 
señales de 3v del ESP32.
El filamento es alimentado con una tension cuadrada bipolar generada por un CD40106 montada sobre los 5V ( de 0,7 a 4,3V ) variable con un potenciometro, este valor queda montado por debajo de los 5v
de esta forma cuando los anodos y las grillas tienen 0v se logra un apagado total de los mismos y con la alterna se logra un brillo mas parejo a lo largo del display.
La tension de 18v tambien puede variarse con un potenciometro, la realidad es que la tension de filamento en mi display hay que mantenerla el maximo y la tension de anados y grilla 
tambien estan al maximo en mi caso 18,5v
Usando estos integrados no debemos superar los 20V, no llegue a probar esto, esta circuiteria y soft es un prototipo de prueba para este display en particular, otros modelos deberan ser
ensayados con otros tipos de circuitos a medida.
La tension de funcionamiento ideal seria un poco mas elevada
