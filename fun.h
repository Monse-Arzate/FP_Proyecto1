#ifndef __FUN_H__
#define __FUN_H__

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void  octal_deci(char octal[]);
void deci_octal(int num);

int binario_decimal(char binario[]);
void deci_bin(int num);

void deci_hexa(int num);
void hexa_deci(char hex[]);

void conv_bin_hexa(char binario[]);
void conv_hexa_bin(char hex[]);

void bin_octal(char binario[]);
 void conv_octal_binario(char *oct, char *bin);

#endif 
