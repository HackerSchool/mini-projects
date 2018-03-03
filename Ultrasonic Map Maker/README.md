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

Outra componente que vamos usar é o servo. A diferença entre o servo e o motor DC é o facto de que o servo consegue girar num certo ângulo, com bastante precisão e manter-se nessa posição.

Vamos então usar estas duas componentes para termos um ângulo de visão de 180º para o nosso robot.

### Segundo passo: Material

Como já foi referido vamos precisar de um arduino, um servo e um sensor ultrassónico. Em termos de software, o Arduino IDE vai servir para fazermos upload para o Arduino do código para controlar o servo; para obtermos a distância do sensor ultrassónico e também para enviar para o serial port. O MatLab vai receber os dados do serial port, processá-los e devolver um gráfico para visualizar os dados.

### Terceiro passo: Mecânica

Vamos colocar o sensor ultrassónico ao servo de modo que fique algo deste género:

![alt text](https://hackster.imgix.net/uploads/image/file/150528/IMG_20160407_141058.jpg?auto=compress%2Cformat&w=680&h=510&fit=max)

De seguida vamos ligar os fios todos ao arduino (usando a breadboard se necessário) de acordo com o seguinte esquema:

![alt text](https://raw.githubusercontent.com/HackerSchool/mini-projects/master/Ultrasonic%20Map%20Maker/imagens/scheme.PNG)

![alt text](https://raw.githubusercontent.com/HackerSchool/mini-projects/master/Ultrasonic%20Map%20Maker/imagens/scheme2.PNG)

### Quarto passo: Código Arduino

O código do Arduino vai controlar o movimento do servo, quando é que as leituras do sensor ultrassónico são capturadas e com que frequência. Abaixo estão explicitados os vários passos do código.

* importar as bibliotecas necessárias (neste caso "Servo.h" e "NewPing.h")
* definir as variáveis e os pins a usar
* definir o servo
* iniciar a comunicação com o serial port
* esperar 3 segundos
* iniciar o conteiro a 0
* rodar o servo 1 grau
* obter os dados do sensor ultrassónico 1o vezes (por default)
* fazer a média dos dados
* enviar a média para o serial port
* voltar ao passo 7 (rodar o servo 1º)
* ...

### Quinto passo: Código MatLab

O MatLab vai ler os dados que o Arduino enviou para o serial port. Estes dados dizem-nos duas coisas. A primeira é o grau de rotação do servo, a segunda é a distância de um obstáculo nessa direção. Assim sendo, os dados que temos neste momento estão nas coordenadas polares. Para o gráfico que for gerado fazer algum sentido, será necessário converter estes dados para coordenadas cartesianas X-Y.

E é isto que o código MatLab vai fazer. Vai obter os dados da COM port, guardá-los numa matriz com o respetivo ângulo de rotação e converter para coordenadas cartesianas como mostrado na imagem abaixo.

![alt text](https://raw.githubusercontent.com/HackerSchool/mini-projects/master/Ultrasonic%20Map%20Maker/imagens/coordinates.png)

em que r é a distância do sensor ao objeto e portanto a coordenada do x é rcos(x) e a coordenada do y é rsin(x).

Assim que isto estiver feito, vai devolver como outuput o gráfico dos pontos.

Para um sensor colocado dentro de uma caixa retangular o output é o seguinte:

![alt text](https://hackster.imgix.net/uploads/image/file/150530/desk%20mapping.jpg?auto=compress%2Cformat&w=1280&h=960&fit=max)

**Agora é a tua vez de experimentar!**
