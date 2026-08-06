# Sensor de Inclinação

O Sensor de Inclinação é um dispositivo capaz de detectar alterações na posição ou inclinação de um objeto. Dentro do cilindro existe uma pequena esfera condutora, quando o sensor está reto, a esfera encosta em dois contatos metálicos, a esfera rola para o outro lado. Os contatos deixam de se tocar, o circuito abre, é exatamente como um interruptor liga/desliga.
Ela fecha o circuito elétrico. Neste circuito, o Arduino monitora continuamente o estado do sensor e, quando uma inclinação é detectada, um buzzer é acionado para emitir um alerta sonoro.

---

## Componentes Utilizados

| Quantidade | Componente                  |
| ---------- | --------------------------- |
| 1          | Arduino Uno                 |
| 1          | Módulo Sensor de Inclinação |
| 1          | Buzzer                      |
| 2          | Jumpers Macho-Macho         |
| 3          | Jumpers Fêmea-Macho         |
| 1          | Protoboard                  |
| 1          | Cabo USB A/B                |

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
<b>Sensor de Inclinação</b><br>
<img src="../Imagens/sensorInclinacao.jpeg" width="100">
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

### Sensor de Inclinação

| Sensor | Arduino        |
| ------ | -------------- |
| VCC    | 5V             |
| GND    | GND            |
| DO     | Pino Digital 13 |

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

O Arduino monitora continuamente o estado do sensor de inclinação através da saída digital (DO).

Enquanto o sensor permanece na posição considerada estável, o buzzer permanece desligado. Quando o módulo detecta uma inclinação, sua saída digital muda de estado e o Arduino aciona o buzzer, emitindo um alerta sonoro.

Ao retornar à posição inicial, o buzzer é desligado automaticamente.

---

## Demonstração

[Vídeo de funcionamento](circuito/sensorInclinacao.mp4)

---

## Código Fonte

[Código-fonte](codigo.ino)
