---

Escuela: 'Escuela de Computación'

Institución: 'Tecnológico de Costa Rica'

Titulo: 'Módulo Óptico para Sistemas de Puntos, aplicado en Mesas de Juego'

Abstract: 'Este proyector trata acerca de la reparación,el mejoramiento y la impementacion de la tecnología de los Arduinos en un futbolín, dicha tecnología se usara para el conteo de  goles automatizado, utilizando un LCD y un sensor de Luz'

Keywords: 'Futbolín, Arduino, Marcador'

Autor1: 'Walter Alvarez'

Autor1Biografia: 'Estudiante avanzado de la carrera de Ingeniería en Computación del Tecnológico de Costa Rica, forma parte del proyecto "Módulo Óptico para Sistemas de Puntos aplicado en Mesas de Juego" de la escuela de Computación de ITCR. Actualmente es miembro del grupo de Tetro "Teatro Agosto" en el Tecnológico de Costa Rica.'

Autor2: 'Randall Araya'

Autor2Biografia: 'Estudiante avanzado de la carrera de Ingeniería en Computación del Tecnológico de Costa Rica, forma parte del proyecto "Módulo Óptico para Sistemas de Puntos aplicado en Mesas de Juego" de la escuela de Computación de ITCR. Actualmente es miembro la oficina de TI de la misma escuela.'

Autor3: 'Brayan Gonzáles'

Autor3Biografia: 'Estudiante avanzado de la carrera de Ingeniería en Computación del Tecnológico de Costa Rica, forma parte del proyecto "Módulo Óptico para Sistemas de Puntos aplicado en Mesas de Juego" de la escuela de Computación de ITCR. Actualmente es funcionario del Tecnológico de Costa Rica en la oficina de TI de la misma escuela.'

Autor4: 'Oscar Gonzáles'

Autor4Biografia: 'Estudiante avanzado de la carrera de Ingeniería en Computación del Tecnológico de Costa Rica, forma parte del proyecto "Módulo Óptico para Sistemas de Puntos aplicado en Mesas de Juego" de la escuela de Computación de ITCR. Y es amante de las mesas de juego'

Autor5: 'Kevin Moraga'

Autor5Biografia: 'Ingeniero en Computación del Tecnológico de Costa Rica, Master en Ciencias de la Computación del Tecnológico de Costa Rica. Es profesor del Tecnológico de Costa Rica y actualmente es el coordinador de  la Oficina de TI de la Escuela de Ingeniería en Computación del Tecnológico de Costa Rica de la Sede Interuniversitaria'

Autor6: 'Jordan Villalobos'

Autor6Biografia: 'Estudiante avanzado de la carrera de Ingeniería en Computación del Tecnológico de Costa Rica, forma parte del proyecto "Módulo Óptico para Sistemas de Puntos aplicado en Mesas de Juego" de la escuela de Computación de ITCR. Y es amante de las mesas de juego'

references:
- id: sikguide
  title: SIK GUIDE
  author:
  - family: Electronics
    given: Sparkfun
  publisher: Sparkfun
  issued:
    year: 2014

- id: webarduino
  title: Arduino Reference
  author:
  - family: Arduino
    given: 
  publisher: 
  url: https://www.arduino.cc/en/Reference/HomePage
  issued:
    year: 2014

- id: webgithub
  title: tec-alajuela/modulo_optico
  author:
  - family: Github
    given: 
  publisher: 
  url: https://github.com/tec-alajuela/modulo_optico
  issued:
    year: 2015

---

Introducción
============

Descripción General
-------------------
El proyecto "Módulo Óptico para Sistemas de Puntos aplicado en Mesas de Juego" pretende modificar un futbolín y mejorar sus aplicaciones a partir de el uso de Arduinos y materiales reciclados.

Objetivos
---------

### Objetivo General

Restablecer el uso de futbolín, agregar y mejorar su funciones, mediante la investigación de la tecnología de los Arduinos y su implementación.


### Objetivos Específicos

- Restablecer el futbolín en su totalidad, que este se pueda usar si ningún problema.
- Analizar y implementar la tecnología de los Arduinos en el futbolín.
- Realizar un sistema de conteo de goles automático.

Estado Actual
-------------
- El futbolín se encuentra sin patas, estas fueron cortadas.
- Cuatro de los muñecos del futbolín se encuentran totalmente dañados y desprendidos de las varillas y al rededor de 5 de ellos están rotos pero aun se encuentra en el futbolín.
- Los canales por donde ingresan las bolas al realizar un gol se encuentran desprendidos, pero en buen estado.
- El contador manual de goles no esta.
- Una de las varillas del futbolín esta doblada.

Soluciones Propuestas
---------------------
- Para solucionar el problema de las patas se propuso un diseño de patas removibles, con la ayuda de una varilla de metal, para esto se tomara la varilla de el futbolín que está doblada ya que esta debe ser remplazada.

- Para realizar un conteo automático de los goles se tiene dos soluciones:

    - Para la primera solución se presenta un contador de goles diseñado con Arduino, este usa un sensor de flexibilidad, en el cual  al pasar la bola y tocar dicho sensor este envía señal indicando que hubo un cambio (señal que es enviada en números) cuando esto sucede se marcara un gol, se maneja un  contador en una variable al que se le suma 1 y este contador sera mostrado en una pantalla LCD.
    
    - Para la segunda solución se presenta un contador de goles diseñado con Arduino, este usa un sensor de luminosidad y un LCD, en el cual se hará un embudo por el cual la bola ingrese y disminuya la cantidad de luz en el sensor al pasar cuando esto suceda se marcara un gol, se maneja un  contador en una variable al que se le suma 1 y este contador sera mostrado en una pantalla LCD.

Detalles de la Solución Propuesta
---------------------------------
1. Patas removibles:
    - La varilla doblada que se le removió al futbolín se corto en pedazos de 14cm.
    - una vez que se obtuvo 4 varillas de 14 cm, se le perforó en la parte superior las patas removidas y y la parte inferior de las patas que aun estaban en el futbolín, se añadió la varilla y se unieron las patas.

2. Contador Automático:
    - Para realizar el lector de goles automatico es necesario el kit de Arduino "SparkFun Inventorś Kit - V3.2"
    - Se debe instalar el Arduino IDE, si se esta en una plataforma linux se debe ingresar a una terminal y escribir sudo apt-get install arduino, si se encuentra en una plataforma diferente se  debe ingresar a [@webarduino] a la viñeta de Download y seguir las instrucciones de descarga.
    - A continuacion se presentan dos formas de como se debe emsamblar las diferente partes del arduino para poder realizar el marcador de goles automatico.
        + Para el arduino con sensor de flexibilidad se necesitan:
          * Un Arduino
          * Un Breadboard Small 
          * 10 Jumper Wine
          * Un Push Bottom
          * Un Potientiometer
          * Una Pantalla LCD 16X2
          * Un Flex Sensor
        + Para el arduino con sensor óptico se necesita:
          * Un Arduino
          * Un Breadboard Small 
          * 10 Jumper Wine
          * Un Push Bottom
          * Un Potientiometer
          * Una Pantalla LCD 16X2
          * Un Photo Resistor Vease [@sikguide] pag 15, 5, 6
          
    -Ya que se tiene el Arduino emsamblado y conecto a su computadora junto con el Arduino IDE instalado se debe ingresar a [@webgithub] y Descargar el código fuente "ModuloOptico.ino", pegarlo en el IDE, compilarlo y correr el programa.


3. Emsamblado en Futbolín
    - 

Problemas Encontrados
---------------------
- El modelo de conteo de goles con el sensor de flexibilidad es muy poco duradero el sensor estará muy descubierto y su uso hará que se desgaste muy rápidamente.


Conclusiones y trabajo futuro
-----------------------------

- Para el conteo de goles es mucho mejor es uso del sensor de luz, tendrá mas durabilidad gracias a la forma en que este fue aplicado.
- Se deben reemplazar los muñecos que se encuentran quebrados en el futbolín
- Se debe añadir la varilla y los muñecos que fueron retirados del futbolín junto con los muñecos.
- Se quiere implementar el método de cobro con las monedas de CacaoTEC, proyecto que se esta llevando acabo por los miembros de la oficina de TI.
- se quiere implementar los post del partido en Twitter, marcadores durante el juego y resultado del partido.


Referencias
-----------

