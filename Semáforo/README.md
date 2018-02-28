# Mini-Projeto: Semáforo Interativo

**Objetivo:** Fazer um sistema de semáforos, com a secção para carros e para pedestres. Quando o pedestre deseja atravessar a passadeira deve pressionar um botão que dará início à alteração do estado das luzes de semáforos. Desta forma dá-se indicação para os carros pararem e permitirem que os pedestres atravessem com segurança.

[[https://github.com/HackerSchool/mini-projects/tree/master/Esquema/esquema-trafficlights.jpeg|alt=octocat]]

## Material Necessário:
- 2x LED vermelho
- LED amarelo
- 2x LED verde
- 5 x Resistências de 150Ohm
- Botão
- Arduino

##Funções necessárias no programa:
- **pinMode(pin, mode)** - Configura um pino específico para se comportar como input ou output.

- **digitalWrite(pin, value)** - Mete um certo pino digital a HIGH ou LOW.

- **digitalRead(pin)** - Lê o valor do pino digital especificado, tanto HIGH como LOW.

- **millis()** - Retorna o número de milissegundos que passaram desde que o Arduino começou a correr o programa atual.

- **delay(ms)** - Pausa o programa durante o período de tempo especificado como parâmetro (em milissegundos).

##Links Úteis:
- Funções Standard de Arduino (Referência de todas as funções acima): https://www.arduino.cc/reference/en/#functions
