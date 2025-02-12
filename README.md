# 🎯 Projeto: Controle de Servo Motor com PWM no Raspberry Pi Pico

Este projeto demonstra como controlar um servo motor e um LED RGB usando o módulo PWM do Raspberry Pi Pico. O servo motor é movido suavemente entre 0 e 180 graus, enquanto o LED RGB muda de brilho proporcionalmente ao ciclo de trabalho do PWM.

---

## 🛠️ Componentes Utilizados
- **Microcontrolador:** Raspberry Pi Pico (RP2040)
- **Servo Motor:** Micro Servo Padrão (com ângulo de 0° a 180°)
- **LED RGB:** 1 unidade (comum cátodo ou ânodo)
- **Resistores:**
  - 68Ω para o LED vermelho
  - 10Ω para os LEDs verde e azul
- **Jumpers e Protoboard:** Para conexões

---

## 📋 Funcionalidades
1. **Controle de Servo Motor:**
   - Movimentação entre 0°, 90° e 180°.
   - Movimento suave com incremento de 5µs no ciclo ativo.
2. **Controle de LED RGB:**
   - Brilho proporcional ao ciclo de trabalho do PWM.
   - Sincronizado com o movimento do servo.
3. **Uso de PWM:**
   - Frequência de 50Hz (período de 20ms).
   - Ciclo de trabalho ajustável para controle preciso.

---

## 🖥️ Estrutura do Código
O projeto está organizado em três arquivos principais:
1. **`main.c`:** Código principal, responsável pela lógica de controle.
2. **`servo_pwm.h`:** Cabeçalho com declarações de funções e constantes.
3. **`servo_pwm.c`:** Implementação das funções de controle do PWM, servo e LED.

---

## 🔌 Conexões
| Componente       | Pino no Raspberry Pi Pico |
|------------------|---------------------------|
| Servo Motor (Sinal) | GPIO 22                  |
| LED RGB   | GPIO 12                       |

---

## 🚀 Como Executar o Projeto

### Pré-requisitos
1. **Ambiente de Desenvolvimento:**
   - Instale o [Raspberry Pi Pico SDK](https://github.com/raspberrypi/pico-sdk).
   - Configure o CMake e o compilador GCC.
2. **Hardware:**
   - Conecte o servo motor e o LED RGB ao Raspberry Pi Pico conforme a tabela acima.

### 🎥 Demonstração
- O servo motor se move suavemente entre 0° e 180°.
- O LED RGB muda de brilho conforme o movimento do servo.

### 📂 Estrutura do Projeto
```
servo-pwm-controller/
├── CMakeLists.txt
├── main.c
├── servo_pwm.h
└── servo_pwm.c
```
### Instalação

1. Clone o repositório:
   ```bash
   git clone https://github.com/ricardo-rals/ServoPWMController.git
   cd ServoPWMController
   ```

2. Abra o projeto no Visual Studio Code.

3. Configure o SDK do Raspberry Pi Pico W de acordo com a [documentação oficial](https://datasheets.raspberrypi.com/pico/getting-started-with-pico.pdf).

4. Siga as instruções no Visual Studio Code para compilar e carregar o projeto no seu Raspberry Pi Pico.


### Video de Apresentação

Para um guia visual sobre como configurar e executar este projeto, confira este.
[YouTube video](https://youtu.be/lzIg79Zw-2o). 

