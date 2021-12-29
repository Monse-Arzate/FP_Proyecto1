#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "fun.h"
void menu();

int main()
{
    int num, op;
    char octal[100], binario[100], hex[100];
    char *oct, *bin;
    do
    {
        menu();
        printf("\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("\n-----Binario a decimal-----\n");
            binario_decimal(binario);
            break;
        case 2:
            printf("\n-----Binario a hexadecimal-----\n");
            conv_bin_hexa( binario);
            break;
        case 3:
            printf("\n-----Binario a octal-----\n");

            bin_octal( binario);
            break;
        case 4:
            printf("\n-----Decimal a binario-----\n");
            deci_bin(num);
            break;
        case 5:
            printf("\n-----Decimal a hexadecimal-----\n");
            deci_hexa(num);
            break;
        case 6:
            printf("\n-----Decimal a octal-----\n");
            deci_octal(num);
            break;
        case 7:
            printf("\n-----Hexadecimal a binario-----\n");
            conv_hexa_bin(hex);
            break;
        case 8:
            printf("\n-----Hexadecimal a decimal-----\n");
            hexa_deci(hex);
            break;
        case 9:
            printf("\n-----Octal a binario-----\n");
            conv_octal_binario(octal, bin);
            break;

        case 10:
            printf("\n-----Octal a decimal-----\n");
            octal_deci(octal);
            break;

        default:
            break;
        }

    } while (op != 11);

    return 0;
}
void menu()
{
    printf("----------Calculadora de conversiones----------");
    printf("\n1.Binario a decimal. ");
    printf("\n2.Binario a hexadecimal.");
    printf("\n3.Binario a octal.");
    printf("\n4.Decimal a binario. ");
    printf("\n5.Decimal a hexadecimal.");
    printf("\n6.Decimal a octal.");
    printf("\n7.Hexadecimal a binario. ");
    printf("\n8.Hexadecimal a decimal.");
    printf("\n9.Octal a binario.");
    printf("\n10.Octal a decimal.");
    printf("\n11.Salir.");
}
