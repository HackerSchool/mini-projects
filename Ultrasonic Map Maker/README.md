# Mini-Projeto: Ultrasonic Map Maker

**Objetivo**: Gerar um mapa baseado na distância entre o sensor e obstáculos autonomamente.

![alt text](https://hackster.imgix.net/uploads/cover_image/file/150523/IMG_20160407_141357.jpg?auto=compress%2Cformat&w=900&h=675&fit=min)

### Informações

Este projeto é de dificuldade média e tem a duração de cerca de 4 horas.

## Material Necessário

### Hardware

* Arduino Uno/Yun
* Sensor Ultrassónico
* Servo
* Fios

### Software

* Arduino IDE
* Matlab


## Desenvolvimento do projeto

### Primeiro passo: Teoria

Neste projeto vamos usar um sensor ultrassónico de distância. Gera ondas de som para além do alcance do ouvido humano e mede a distância calculando o tempo necessário para que estas ondas atinjam o obstáculo e voltem. É semelhante ao sistema que os morcegos usam para se orientar.

![alt text](https://hackster.imgix.net/uploads/image/file/150524/Working-of-HC-SR04-Ultrasonic-Sensor.jpg?auto=compress%2Cformat&w=1280&h=960&fit=max)

Outra componente que vamos usar é o servo. A diferença entre o servo e o motor DC é o facto de que o servo consegue girar num certo ângulo, com bastante precisão e manter-se nessa posição.

Vamos então usar estas duas componentes para termos um ângulo de visão de 180º para o nosso robot.

### Segundo passo: Material

Como já foi referido vamos precisar de um arduino, um servo e um sensor ultrassónico. Em termos de software, o Arduino IDE vai servir para fazermos upload para o Arduino do código para controlar o servo; para obtermos a distância do sensor ultrassónico e também para enviar para o serial port. O MatLab vai receber os dados do serial port, processá-los e devolver um gráfico para visualizar os dados.

### Terceiro passo: Mecânica

Vamos colocar o sensor ultrassónico ao servo de modo que fique algo deste género:

![alt text](https://hackster.imgix.net/uploads/image/file/150528/IMG_20160407_141058.jpg?auto=compress%2Cformat&w=680&h=510&fit=max)

De seguida vamos ligar os fios todos ao arduino (usando a breadboard se necessário) de acordo com o seguinte esquema:



