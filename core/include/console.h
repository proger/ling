#pragma once

#include <stdint.h>
#include "arch_console.h"
#include "ser_cons.h"

typedef struct outlet_t outlet_t;
int console_is_initialized(void);

void console_attach(outlet_t *ol);
void console_detach(outlet_t *ol);
int console_write(char *buf, int len);

int console_do_pending(void);

int ser_cons_present(void);
int ser_cons_write(char *bur, int len);
