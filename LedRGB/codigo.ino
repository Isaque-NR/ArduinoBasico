const int potenciometro = A0;

const int vermelho = 11;
const int verde     = 10;
const int azul      = 9;

void setup()
{
    pinMode(vermelho, OUTPUT);
    pinMode(verde, OUTPUT);
    pinMode(azul, OUTPUT);
}

void loop()
{
    // Lê o potenciômetro (0 a 1023)
    int leitura = analogRead(potenciometro);

    // Converte para 6 regiões de 256 níveis (0 a 1535)
    int valor = map(leitura, 0, 1023, 0, 1535);

    int r, g, b;

    if (valor < 256)
    {
        // Vermelho -> Amarelo
        r = 255;
        g = valor;
        b = 0;
    }
    else if (valor < 512)
    {
        // Amarelo -> Verde
        r = 511 - valor;
        g = 255;
        b = 0;
    }
    else if (valor < 768)
    {
        // Verde -> Ciano
        r = 0;
        g = 255;
        b = valor - 512;
    }
    else if (valor < 1024)
    {
        // Ciano -> Azul
        r = 0;
        g = 1023 - valor;
        b = 255;
    }
    else if (valor < 1280)
    {
        // Azul -> Magenta
        r = valor - 1024;
        g = 0;
        b = 255;
    }
    else
    {
        // Magenta -> Vermelho
        r = 255;
        g = 0;
        b = 1535 - valor;
    }

    // Como o LED é de ÂNODO COMUM,
    // a lógica do PWM é invertida.
    // Portanto, subtraímos o valor de 255.

    analogWrite(vermelho, 255 - r);
    analogWrite(verde,     255 - g);
    analogWrite(azul,      255 - b);
    
    /* Caso seu LEG RBG seja Cátodo Comum use esse bloco e apague o de cima.
    analogWrite(vermelho, r);
    analogWrite(verde, g);
    analogWrite(azul, b);
    */

    delay(5);
}