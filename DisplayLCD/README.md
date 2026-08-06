# LCD 16x2 I2C (Circuito do Perfil)

O display **LCD 16x2 com módulo I2C** é um dos componentes mais utilizados em projetos com Arduino para exibir informações de forma simples e eficiente. Neste projeto, o display escreve a mensagem **"Welcome to my"** na primeira linha e **"profile"** na segunda, exibindo cada caractere individualmente para simular um efeito de digitação, e você pode personalizar pra qualquer mensagem no código

---

## Componentes Utilizados

| Quantidade | Componente          |
| ---------- | ------------------- |
| 1          | Arduino Uno         |
| 1          | LCD 16x2            |
| 1          | Módulo I2C (PCF8574)|
| 4          | Jumpers Fêmea - Macho            |
| 1          | Cabo USB A/B        |

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
<b>LCD 16x2</b><br>
<img src="../Imagens/LCD.jpeg" width="100">
</td>

<td>
<b>Módulo I2C</b><br>
<img src="../Imagens/ModuloI2C.jpeg" width="100">
</td>

<td>
<b>Jumpers</b><br>
<img src="../Imagens/JumpersF_M.jpeg" width="100">
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

| Módulo I2C | Arduino Uno |
| ----------- | ----------- |
| VCC         | 5V          |
| GND         | GND         |
| SDA         | A4          |
| SCL         | A5          |

> O módulo I2C reduz a quantidade de conexões necessárias para controlar o LCD, utilizando apenas dois pinos de comunicação (SDA e SCL), além da alimentação.

---

## Esquema do Circuito

![Circuito](circuito/circuito.png)

---

## Como Funciona

O módulo I2C (Inter-Integrated Circuit) atua como uma interface entre o Arduino e o display LCD.

Enquanto um LCD convencional exige diversos pinos digitais para funcionar, o módulo I2C converte toda a comunicação para apenas duas linhas:

- SDA (Serial Data): responsável pela transmissão dos dados.
- SCL (Serial Clock): responsável pela sincronização da comunicação.

Após inicializar o display, o Arduino posiciona o cursor na primeira linha e escreve a mensagem "Welcome to my" caractere por caractere. Em seguida, o cursor é movido para a segunda linha, onde a palavra "profile" é exibida utilizando o mesmo efeito.

Como toda a animação ocorre na função `setup()`, a mensagem é escrita apenas uma vez quando o Arduino é ligado ou reiniciado.

---

## Demonstração

[Vídeo do funcionamento](circuito/LCD.mp4)

---

## Código Fonte

[Código-fonte](codigo.ino)