#ifndef ardwloop_read_h
#define ardwloop_read_h

int impl_read(const int n);

void set_delay_read(int ms);

int get_delay_read();

void reset_bfn();

void receive_r(const char END, int Rc, const char *H, const int Kc, const char *K, struct D **Rv);

#endif
