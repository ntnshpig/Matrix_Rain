#ifndef HEADER_H
#define HEADER_H

#include <stdbool.h>
#include <ncurses.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>

void matrix_rain();

void mx_initcolor();

void mx_introduction();

int mx_strlen(const char *);

void mx_printerr(const char *);

#endif
