# Hello World

Assim como fazemos quando vamos aprender uma nova linguagem, o "Hello World" dos microcontroladores é piscar Leds, então vamos fazer isso!
---

## Componentes Utilizados

| Quantidade | Componente    |
| ---------- | ------------- |
| 1          | Arduino Uno   |
| 2          | LED           |
| 2          | Resistor 300Ω |
| 3          | Jumpers       |
| 1          | Protoboard    |
| 1          | Cabo Usb A/B  | 

---

## Componentes

<p align="center">
    <table>
        <tr>
            <td><img src="https://github.com/Isaque-NR/ArduinoBasico/HelloWorld/imagens/Arduino.jpeg" width="100"/></td>
            <td><img src="https://github.com/Isaque-NR/ArduinoBasico/HelloWorld/imagens/Protoboard.jpeg" width="100"/></td>
            <td><img src="https://github.com/Isaque-NR/ArduinoBasico/HelloWorld/imagens/LEDs.jpeg" width="100"/></td>
            <td><img src="https://github.com/Isaque-NR/ArduinoBasico/HelloWorld/imagens/Resistores300" width="100"/></td>
            <td><img src="https://github.com/Isaque-NR/ArduinoBasico/HelloWorld/imagens/Jumpers.jpeg" width="100"/></td>
            <td><img src="https://github.com/Isaque-NR/ArduinoBasico/HelloWorld/imagens/CaboUSB" width="100"/></td>
        </tr>
    </table>
</p

---

## Ligações

| Componente                 | Arduino         |
| -------------------------- | --------------- |
| Ânodo (+) do LED Vermelho  | Pino Digital 2  |
| Cátodo (-) do LED Vermelho | Resistor 300Ω   |
| Resistor 300Ω              | GND             |
| Ânodo (+) do LED Verde     | Pino Digital 3  |
| Cátodo (-) do LED Verde    | Resistor 300Ω   |
| Resistor 300Ω              | GND             |

---

## Esquema do Circuito

![Circuito](images/circuito.jpeg)

---

## Funcionamento

O Arduino envia um sinal digital de 5V para o pino 2, acendendo o LED Vermelho, e 0V para o Led Verde, deixando-o apagado, por um intervalo de tempo de 1 segundo. Em seguida, os sinais são invertidos, consequentemente apagando o LED Vermelho e Ligando o LED Verde.

---

## Demonstração

Veja o funcionamento do circuito na pasta: 

```text
videos/HelloWorld.mp4
```

---

## Código Fonte

O código utilizado neste circuito está disponível na pasta:

```text
codigo/codigo.ino
```

