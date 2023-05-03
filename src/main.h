#ifndef STD_HEADERS_H
#define STD_HEADERS_H

#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

void pass_gen_ascii(const size_t password_length);
void pass_gen_nums(const size_t password_length);
void pass_gen_dalphs(const size_t password_length);
void pass_gen_ualphs(const size_t password_length);

#endif
