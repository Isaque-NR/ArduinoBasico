# Sensor de Gás

O Módulo de Sensor de Gás MQ-2 é capaz de detectar a presença de gases inflamáveis e fumaça no ambiente através da variação de sua resistência interna. Neste circuito, o Arduino monitora continuamente o sensor e, quando a concentração de gás ultrapassa um determinado limite, um buzzer é acionado para emitir um alerta sonoro.

---

## Componentes Utilizados

| Quantidade | Componente           |
| ---------- | -------------------- |
| 1          | Arduino Uno          |
| 1          | Módulo Sensor de Gás MQ-2 |
| 1          | Buzzer               |
| 2          | Jumpers Macho-Macho  |
| 3          | Jumpers Fêmea-Macho  |
| 1          | Protoboard           |
| 1          | Cabo USB A/B         |

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
<b>Sensor de Gás MQ-2</b><br>
<img src="../Imagens/SensorGas.jpeg" width="100">
</td>

<td>
<b>Buzzer</b><br>
<img src="../Imagens/Buzzer.jpeg" width="100">
</td>

<td>
<b>Jumpers Macho-Macho</b><br>
<img src="../Imagens/Jumpers.jpeg" width="100">
</td>

<td>
<b>Jumpers Fêmea-Macho</b><br>
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

### Sensor de Gás

| Sensor | Arduino |
| ------ | ------- |
| VCC    | 5V      |
| GND    | GND     |
| AO     | A0      |

### Buzzer

| Componente        | Arduino        |
| ----------------- | -------------- |
| Pino positivo (+) | Pino Digital 6 |
| Pino negativo (-) | GND            |

---

## Esquema do Circuito

![Circuito](circuito/circuito.png)

---

## Funcionamento

O Arduino realiza continuamente a leitura do valor analógico fornecido pelo sensor de gás através do pino A0.
Quando a concentração de gás ultrapassa o limite de 500 definido no código, o Arduino envia 5v pro Buzzer que é acionado, emitindo um alerta sonoro para indicar uma situação de risco, quando os níveis retornam ao valor considerado seguro, o buzzer é desligado automaticamente.

---

## Demonstração

[Vídeo de funcionamento](circuito/sensorGas.mp4)

---

## Código Fonte

[Código-fonte](codigo.ino)
