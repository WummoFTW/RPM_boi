void Uart_Transmit();
void Get_RPM();

#define ENCODER_PULSES_PER_REVOLUTION 1024

extern float MAIN_speed;

extern char SPEED_buffer[20];
extern int buffer_ready;

extern volatile uint32_t previous_encoder_count;
extern volatile float current_rpm;