//######################################################################
                             (---PWM---)
analogWrite(Pin_DC_1, PWM_DC);
                             
6 and 5 are  controlled by TCCR0B
9 and 10 are controlled by TCCR1B
11 and 3 are controlled by TCCR2B

PINS D5 AND D6 (TIMER 0) – 8 BITS
// Pins D5 and D6 are 62.5kHz
TCCR0B = 0b00000001; // x1
TCCR0A = 0b00000011; // fast pwm
// Pins D5 and D6 - 31.4 kHz
TCCR0B = 0b00000001; // x1
TCCR0A = 0b00000001; // phase correct
// Pins D5 and D6 - 7.8 kHz
TCCR0B = 0b00000010; // x8
TCCR0A = 0b00000011; // fast pwm
// Pins D5 and D6 - 4 kHz
TCCR0B = 0b00000010; // x8
TCCR0A = 0b00000001; // phase correct
// Pins D5 and D6 - 976 Hz - default
TCCR0B = 0b00000011; // x64
TCCR0A = 0b00000011; // fast pwm
// Pins D5 and D6 - 490 Hz
TCCR0B = 0b00000011; // x64
TCCR0A = 0b00000001; // phase correct
// Pins D5 and D6 - 244 Hz
TCCR0B = 0b00000100; // x256
TCCR0A = 0b00000011; // fast pwm
// Pins D5 and D6 - 122 Hz
TCCR0B = 0b00000100; // x256
TCCR0A = 0b00000001; // phase correct
// Pins D5 and D6 - 61 Hz
TCCR0B = 0b00000101; // x1024
TCCR0A = 0b00000011; // fast pwm
// Pins D5 and D6 - 30 Hz
TCCR0B = 0b00000101; // x1024
TCCR0A = 0b00000001; // phase correct
PINS D9 AND D10 (TIMER 1) – 8 BITS
// Pins D9 and D10 - 62.5 kHz
TCCR1A = 0b00000001; // 8bit
TCCR1B = 0b00001001; // x1 fast pwm
// Pins D9 and D10 - 31.4 kHz
TCCR1A = 0b00000001; // 8bit
TCCR1B = 0b00000001; // x1 phase correct
// Pins D9 and D10 - 7.8 kHz
TCCR1A = 0b00000001; // 8bit
TCCR1B = 0b00001010; // x8 fast pwm
// Pins D9 and D10 - 4 kHz
TCCR1A = 0b00000001; // 8bit
TCCR1B = 0b00000010; // x8 phase correct
// Pins D9 and D10 - 976 Hz
TCCR1A = 0b00000001; // 8bit
TCCR1B = 0b00001011; // x64 fast pwm
// Pins D9 and D10 - 490 Hz - default
TCCR1A = 0b00000001; // 8bit
TCCR1B = 0b00000011; // x64 phase correct
// Pins D9 and D10 - 244 Hz
TCCR1A = 0b00000001; // 8bit
TCCR1B = 0b00001100; // x256 fast pwm
// Pins D9 and D10 - 122 Hz
TCCR1A = 0b00000001; // 8bit
TCCR1B = 0b00000100; // x256 phase correct
// Pins D9 and D10 - 61 Hz
TCCR1A = 0b00000001; // 8bit
TCCR1B = 0b00001101; // x1024 fast pwm
// Pins D9 and D10 - 30 Hz
TCCR1A = 0b00000001; // 8bit
TCCR1B = 0b00000101; // x1024 phase correct


PINS D9 AND D10 (TIMER 1) – 10 BIT
// Pins D9 and D10 - 15.6 kHz 10bit
TCCR1A = 0b00000011; // 10bit
TCCR1B = 0b00001001; // x1 fast pwm
// Pins D9 and D10 - 7.8 kHz 10bit
TCCR1A = 0b00000011; // 10bit
TCCR1B = 0b00000001; // x1 phase correct
// Pins D9 and D10 - 2 kHz 10bit
TCCR1A = 0b00000011; // 10bit
TCCR1B = 0b00001010; // x8 fast pwm
// Pins D9 and D10 - 977 Hz 10bit
TCCR1A = 0b00000011; // 10bit
TCCR1B = 0b00000010; // x8 phase correct
// Pins D9 and D10 - 244 Hz 10bit
TCCR1A = 0b00000011; // 10bit
TCCR1B = 0b00001011; // x64 fast pwm
// Pins D9 and D10 - 122 Hz 10bit
TCCR1A = 0b00000011; // 10bit
TCCR1B = 0b00000011; // x64 phase correct
// Pins D9 and D10 - 61 Hz 10bit
TCCR1A = 0b00000011; // 10bit
TCCR1B = 0b00001100; // x256 fast pwm
// Pins D9 and D10 - 30 Hz 10bit
TCCR1A = 0b00000011; // 10bit
TCCR1B = 0b00000100; // x256 phase correct
// Pins D9 and D10 - 15 Hz 10bit
TCCR1A = 0b00000011; // 10bit
TCCR1B = 0b00001101; // x1024 fast pwm
// Pins D9 and D10 - 7.5 Hz 10bit
TCCR1A = 0b00000011; // 10bit
TCCR1B = 0b00000101; // x1024 phase correct


PINS D3 AND D11 (TIMER 2) – 8 BITS
// Pins D3 and D11 - 62.5 kHz
TCCR2B = 0b00000001; // x1
TCCR2A = 0b00000011; // fast pwm
// Pins D3 and D11 - 31.4 kHz
TCCR2B = 0b00000001; // x1
TCCR2A = 0b00000001; // phase correct
// Pins D3 and D11 - 8 kHz
TCCR2B = 0b00000010; // x8
TCCR2A = 0b00000011; // fast pwm
// Pins D3 and D11 - 4 kHz
TCCR2B = 0b00000010; // x8
TCCR2A = 0b00000001; // phase correct
// Pins D3 and D11 - 2 kHz
TCCR2B = 0b00000011; // x32
TCCR2A = 0b00000011; // fast pwm
// Pins D3 and D11 - 980 Hz
TCCR2B = 0b00000011; // x32
TCCR2A = 0b00000001; // phase correct
// Pins D3 and D11 - 980 Hz
TCCR2B = 0b00000100; // x64
TCCR2A = 0b00000011; // fast pwm
// Pins D3 and D11 - 490 Hz - default
TCCR2B = 0b00000100; // x64
TCCR2A = 0b00000001; // phase correct
// Pins D3 and D11 - 490 Hz
TCCR2B = 0b00000101; // x128
TCCR2A = 0b00000011; // fast pwm
// Pins D3 and D11 - 245 Hz
TCCR2B = 0b00000101; // x128
TCCR2A = 0b00000001; // phase correct
// Pins D3 and D11 - 245 Hz
TCCR2B = 0b00000110; // x256
TCCR2A = 0b00000011; // fast pwm
// Pins D3 and D11 - 122 Hz
TCCR2B = 0b00000110; // x256
TCCR2A = 0b00000001; // phase correct
// Pins D3 and D11 - 60 Hz
TCCR2B = 0b00000111; // x1024
TCCR2A = 0b00000011; // fast pwm
// Pins D3 and D11 - 30 Hz
TCCR2B = 0b00000111; // x1024
TCCR2A = 0b00000001; // phase correct
