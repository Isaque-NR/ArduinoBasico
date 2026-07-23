# Hello World

Assim como fazemos ao aprender uma nova linguagem de programação, o **"Hello World"** da robótica consiste em controlar o acionamento de LEDs. Este projeto apresenta os conceitos básicos de programação embarcada, manipulação de saídas digitais e montagem de circuitos utilizando o Arduino Uno.

---

## Componentes Utilizados

| Quantidade | Componente       |
| ---------- | ---------------- |
| 1          | Arduino Uno      |
| 2          | LEDs             |
| 2          | Resistores 300 Ω |
| 3          | Jumpers          |
| 1          | Protoboard       |
| 1          | Cabo USB A/B     |

---

## Componentes

<p align="center">
<table>
<tr align="center">
<td>
<b>Arduino Uno</b><br>
<img src="../Imagens/Arduino.jpeg" width="100">
</td>

<td>
<b>Protoboard</b><br>
<img src="../Imagens/Protoboard.jpeg" width="100">
</td>

<td>
<b>LEDs</b><br>
<img src="../Imagens/LEDs.jpeg" width="100">
</td>

<td>
<b>Resistores 300 Ω</b><br>
<img src="../Imagens/Resistores300.jpeg" width="100">
</td>

<td>
<b>Jumpers</b><br>
<img src="../Imagens/Jumpers.jpeg" width="100">
</td>

<td>
<b>Cabo USB A/B</b><br>
<img src="../Imagens/CaboUSB.jpeg" width="100">
</td>
</tr>
</table>
</p>

---

## Ligações

| Componente                 | Arduino              |
| -------------------------- | -------------------- |
| Ânodo (+) do LED vermelho  | Pino Digital 2       |
| Cátodo (-) do LED vermelho | Resistor 300 Ω → GND |
| Ânodo (+) do LED verde     | Pino Digital 3       |
| Cátodo (-) do LED verde    | Resistor 300 Ω → GND |

---

## Esquema do Circuito

![Circuito](circuito/circuito.png)

---

## Funcionamento

O Arduino alterna o estado dos LEDs a cada segundo.

Inicialmente, o LED vermelho é acionado enquanto o LED verde permanece apagado. Após um intervalo de 1 segundo, os estados são invertidos: o LED vermelho é desligado e o LED verde é ligado.

Esse processo é executado continuamente dentro da função `loop()`, demonstrando o controle de saídas digitais do microcontrolador.

---

## Demonstração

[Vídeo do funcionamento](circuito/HelloWorld.mp4)

---

## Código Fonte

[Código-fonte](codigo/codigo.ino)

