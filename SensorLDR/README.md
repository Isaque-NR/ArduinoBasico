# Sensor LDR

O sensor LDR (Light Dependent Resistor) é um sensor cuja resistência elétrica varia conforme a intensidade da luz incidente. Neste projeto, o Arduino realiza a leitura da luminosidade do ambiente atravéz do módulo do sensor e controla o acionamento de um LED de acordo com o valor detectado.

---

## Componentes Utilizados

| Quantidade | Componente        |
| ---------- | ----------------- |
| 1          | Arduino Uno       |
| 1          | Módulo Sensor LDR |
| 1          | LED               |
| 1          | Resistor 300 Ω    |
| 5          | Jumpers           |
| 1          | Protoboard        |
| 1          | Cabo USB A/B      |

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
<b>Sensor LDR</b><br>
<img src="../Imagens/sensorLDR.jpeg" width="100">
</td>

<td>
<b>LED</b><br>
<img src="../Imagens/LEDs.jpeg" width="100">
</td>

<td>
<b>Resistor 300 Ω</b><br>
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

| Componente           | Arduino              |
| -------------------- | -------------------- |
| VCC do módulo LDR    | 5V                   |
| GND do módulo LDR    | GND                  |
| D0 (Saída Digital)           | D0           |
| Ânodo (+) do LED     | Pino Digital 2       |
| Cátodo (-) do LED    | Resistor 300 Ω → GND |

---

## Esquema do Circuito

![Circuito](circuito/circuito.png)

---

## Funcionamento

O Arduino realiza continuamente a leitura do valor digital fornecido pelo sensor LDR através do pino **D0**(Variando entre 0 para luminosidade alta e 1 para baixa luminosidade).

Quando a intensidade luminosa do ambiente fica baixa com o sensor enviando 1 pro Arduino, ele envia 5v para o LED fazendo com que acenda. Caso contrário, o LED permanece apagado.

---

## Demonstração

[Vídeo do funcionamento](circuito/sensorLDR.mp4)

---

## Código Fonte

[Código-fonte](codigo/codigo.ino)
