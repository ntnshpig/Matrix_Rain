#include "../inc/header.h"

void mx_printerr(const char *s) {
     int len = mx_strlen(s);
     write(2, s, len);
     write(2, "\n", 1);
}
