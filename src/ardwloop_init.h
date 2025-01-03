#ifndef ardwloop_init
#define ardwloop_init

void inject_arduino_h();

void inject_serial();

void inject_log(void (*p)(const char *));

void impl_log(const char *msg);

void impl_delay(unsigned long ms);

void impl_write_low(int i);

void impl_write_high(int i);

void impl_pin_out(int pin);

void impl_serial_begin(int baud);

int impl_available();

int impl_read(char *buffer, const int n);

int impl_write(char c);

bool impl_post();

#endif