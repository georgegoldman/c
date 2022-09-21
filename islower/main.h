#pragma once


int _putchar(char);
int _islower(int);
int _isalpha(int);
int print_sign(int);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void time_algorithm(void);
void struct_fn(void);
void pointing(void);
void pointer_array_string_quize(void);

/**
 * @brief 0x06. C - More pointers, arrays and strings
 */

void reverse_array(int *a, int n);
void print_number(int n);
void print_buffer(char *b, int size);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *add_strings(char *n1, char *n2, char *r, int r_index);