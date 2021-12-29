#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "fun.h"

void deci_octal(int num)
{
    int i;
    char octal[100];
    printf("\nIngresa un numero de base decimal: ");
    scanf("%i", &num);

    while (num != 0)
    {
        octal[i] = num % 8; // mod
        num = num / 8;      // division
        i++;                // incremento
    }

    i--; // eliminar un lugar
    printf("\nEl numero octal equivalente es : ");

    while (i >= 0)
    {
        printf("%i", octal[i]);
        i--;
    }
    printf("\n");
}

void octal_deci(char octal[])
{
    printf("\nIngresa un numero octal: ");
    scanf("%s", octal);
    int deci = 0, pot = 0;

    for (int i = strlen(octal) - 1; i >= 0; i--)
    {
        switch (octal[i])
        {
        case '0':
            pot++;
            break;
        case '1':
            deci += 1 * pow(8, pot);
            pot++;
            break;
        case '2':
            deci += 2 * pow(8, pot);
            pot++;
            break;
        case '3':
            deci += 3 * pow(8, pot);
            pot++;
            break;
        case '4':
            deci += 4 * pow(8, pot);
            pot++;
            break;
        case '5':
            deci += 5 * pow(8, pot);
            pot++;
            break;
        case '6':
            deci += 6 * pow(8, pot);
            pot++;
            break;
        case '7':
            deci += 7 * pow(8, pot);
            pot++;
            break;
        }
    }
    printf("\nEl numero decimal equivalente es: %d  \n", deci);
    printf("\n");
}

int binario_decimal(char binario[])
{
    printf("\nIngresa un numero binario: ");
    scanf("%s", binario);
    int num = 0, pot = 0;
    for (int i = strlen(binario) - 1; i >= 0; i--)
    {
        if (binario[i] == '1')
            num = num + pow(2, pot);
        pot = pot + 1;
    }
    printf("El numero decimal equivale a: %d ", num);
    printf("\n");
}

void hexa_deci(char hex[])
{
    printf("\nIngresa un numero hexadecimal: ");
    scanf("%s", hex);
    int num = 0, pot = 0;
    for (int i = strlen(hex) - 1; i >= 0; i--)
    {
        switch (hex[i])
        {
        case '0':
            pot = pot + 1;
            break;
        case '1':
            num += pow(16, pot);
            pot = pot + 1;
            break;
        case '2':
            num += 2 * pow(16, pot);
            pot = pot + 1;
            break;
        case '3':
            num += 3 * pow(16, pot);
            pot = pot + 1;
            break;
        case '4':
            num += 4 * pow(16, pot);
            pot = pot + 1;
            break;
        case '5':
            num += 5 * pow(16, pot);
            pot = pot + 1;
            break;
        case '6':
            num += 6 * pow(16, pot);
            pot = pot + 1;
            break;

        case '7':
            num += 7 * pow(16, pot);
            pot = pot + 1;
            break;
        case '8':
            num += 8 * pow(16, pot);
            pot = pot + 1;
            break;
        case '9':
            num += 9 * pow(16, pot);
            pot = pot + 1;
            break;
        case 'A':
        case 'a':

            num += 10 * pow(16, pot);
            pot = pot + 1;
            break;
        case 'B':
        case 'b':
            num += 11 * pow(16, pot);
            pot = pot + 1;
            break;
        case 'C':
        case 'c':
            num += 12 * pow(16, pot);
            pot = pot + 1;
            break;
        case 'D':
        case 'd':
            num += 13 * pow(16, pot);
            pot = pot + 1;
            break;
        case 'E':
        case 'e':
            num += 14 * pow(16, pot);
            pot = pot + 1;
            break;
        case 'F':
        case 'f':
            num += 15 * pow(16, pot);
            pot = pot + 1;
            break;
        }
    }
    printf("El numero decimal equivale a: %d", num);
    printf("\n");
}

void deci_hexa(int num)
{
    printf("\nIngresa un numero decimal: ");
    scanf("%d", &num);
    int t = 0, i = 0, j = 0;
    char *temp = NULL, *hex = NULL;
    temp = (char *)malloc(sizeof(char));
    strcpy(temp, "");

    do
    {
        t = num % 16;
        num = (int)(num / 16);
        switch (t)
        {
        case 0:
            strcat(temp, "0");
        case 1:
            strcat(temp, "1");
            break;
        case 2:
            strcat(temp, "2");
            break;
        case 3:
            strcat(temp, "3");
            break;
        case 4:
            strcat(temp, "4");
            break;
        case 5:
            strcat(temp, "5");
            break;
        case 6:
            strcat(temp, "6");
            break;
        case 7:
            strcat(temp, "7");
            break;
        case 8:
            strcat(temp, "8");
            break;
        case 9:
            strcat(temp, "9");
            break;
        case 10:
            strcat(temp, "A");
            break;
        case 11:
            strcat(temp, "B");
            break;
        case 12:
            strcat(temp, "C");
            break;
        case 13:
            strcat(temp, "D");
            break;
        case 14:
            strcat(temp, "E");
            break;
        case 15:
            strcat(temp, "F");
            break;
        }
    } while (num > 0);

    hex = (char *)malloc(strlen(temp) * sizeof(char));
    for (i = strlen(temp) - 1, j = 0; i >= 0; i--, j++)
    {
        hex[j] = temp[i];
    }
   
    printf("El numero hexadecimal equivalente es: %s", hex);
    printf("\n");
     free(temp);
    temp = NULL;
}

void deci_bin(int num)
{
    printf("\nIngresa un numero decimal: ");
    scanf("%d", &num);
    int t = 0, i = 0, j = 0;
    char *temp = NULL, *binario = NULL;
    temp = (char *)malloc(sizeof(char));
    strcpy(temp, "");

    do
    {
        t = num % 2;
        num = (int)(num / 2);
        if (t == 1)
            strcat(temp, "1");
        else
            strcat(temp, "0");
    } while (num != 1 && num != 0);

    if (num == 1)
        strcat(temp, "1");

    binario = (char *)malloc(strlen(temp) * sizeof(char));
    for (i = strlen(temp) - 1, j = 0; i >= 0; i--, j++)
    {
        binario[j] = temp[i];
        //
    }
    free(temp);
    temp = NULL;
    printf("\nEl numero binario equivalente es: %s \n", binario);
    printf("\n");
}

void conv_octal_binario(char *oct, char *bin)
{

    bin = (char *)malloc(strlen(oct) * sizeof(char));
    oct = (char *)malloc(strlen(oct) * sizeof(char));
    printf("Introduzca el numero en base 8: \n");
    scanf("%s", oct);
    int tam = 0, i = 0;
    tam = strlen(oct);
    strcpy(bin, "");
    for (int i = 0; i < tam; i++)
    {
        switch (oct[i])
        {
        case '1':
            strcat(bin, "001");
            break;
        case '2':
            strcat(bin, "010");
            break;
        case '3':
            strcat(bin, "011");
            break;
        case '4':
            strcat(bin, "100");
            break;
        case '5':
            strcat(bin, "101");
            break;
        case '6':
            strcat(bin, "110");
            break;
        case '7':
            strcat(bin, "111");
            break;
        case '0':
            strcat(bin, "000");
            break;
        default:

            break;
        }
    }

    printf("\nEl numero en binario equivale a: %s", bin);
    printf("\n");

    free(bin);
    bin = NULL;
}

void conv_hexa_bin(char hex[])
{
    printf("\nIngresa tu numero hexadecimal: ");
    scanf("%s", hex);
    int tam = 0, i = 0;
    char *bin = NULL;
    tam = strlen(hex);
    bin = (char *)malloc(sizeof(char *));
    strcpy(bin, "");
    for (i = 0; i < tam; i++)
    {
        switch (hex[i])
        {
        case '0':
            strcat(bin, "0000");
            break;
        case '1':
            strcat(bin, "0001");
            break;
        case '2':
            strcat(bin, "0010");
            break;
        case '3':
            strcat(bin, "0011");
            break;
        case '4':
            strcat(bin, "0100");
            break;
        case '5':
            strcat(bin, "0101");
            break;
        case '6':
            strcat(bin, "0110");
            break;
        case '7':
            strcat(bin, "0111");
            break;
        case '8':
            strcat(bin, "1000");
            break;
        case '9':
            strcat(bin, "1001");
            break;
        case 'A':
        case 'a':
            strcat(bin, "1010");
            break;
        case 'B':
        case 'b':
            strcat(bin, "1011");
            break;
        case 'C':
        case 'c':
            strcat(bin, "1100");
            break;
        case 'D':
        case 'd':
            strcat(bin, "1101");
            break;
        case 'E':
        case 'e':
            strcat(bin, "1110");
            break;
        case 'F':
        case 'f':
            strcat(bin, "1111");
            break;
        }
    }
    printf("\nEl numero en binario equivale a: %s", bin);
    printf("\n");
    free(bin);
    bin = NULL;
}

void conv_bin_hexa(char binario[])
{
    printf("\nIngresa un numero binario: ");
    scanf("%s", binario);
    int num = 0, pot = 0;
    int t = 0, i = 0, j = 0;
    char *temp = NULL, *hex = NULL;
    temp = (char *)malloc(sizeof(char));
    strcpy(temp, "");
    for (int i = strlen(binario) - 1; i >= 0; i--)
    {
        if (binario[i] == '1')
            num = num + pow(2, pot);
        pot = pot + 1;
    }
    do
    {
        t = num % 16;
        num = (int)(num / 16);
        switch (t)
        {
        case 0:
            strcat(temp, "0");
        case 1:
            strcat(temp, "1");
            break;
        case 2:
            strcat(temp, "2");
            break;
        case 3:
            strcat(temp, "3");
            break;
        case 4:
            strcat(temp, "4");
            break;
        case 5:
            strcat(temp, "5");
            break;
        case 6:
            strcat(temp, "6");
            break;
        case 7:
            strcat(temp, "7");
            break;
        case 8:
            strcat(temp, "8");
            break;
        case 9:
            strcat(temp, "9");
            break;
        case 10:
            strcat(temp, "A");
            break;
        case 11:
            strcat(temp, "B");
            break;
        case 12:
            strcat(temp, "C");
            break;
        case 13:
            strcat(temp, "D");
            break;
        case 14:
            strcat(temp, "E");
            break;
        case 15:
            strcat(temp, "F");
            break;
        }
    } while (num != 0);
    hex = (char *)malloc(strlen(temp) * sizeof(char));
    for (i = strlen(temp) - 1, j = 0; i >= 0; i--, j++)
    {
        hex[j] = temp[i];
    }

    printf("El numero hexadecimal equivalente es: %s", hex);
    printf("\n");
    free(temp);
    temp = NULL;
}


void bin_octal(char binario[]){

printf("\nIngresa un numero binario: ");
    scanf("%s", binario);
    int num = 0, pot = 0;
    int t = 0, i = 0, j = 0;
    char *temp = NULL, *oct=NULL;
    temp  = (char *)malloc(sizeof(char));
    strcpy(temp , "");
    for (int i = strlen(binario) - 1; i >= 0; i--)
    {
        if (binario[i] == '1')
            num = num + pow(2, pot);
        pot = pot + 1;
    }
    
    do{
            t=num%8;
            num=(int)(num/8);
            switch (t){
                case 0:
                    strcat(temp , "0");
                    break;
                case 1:
                    strcat(temp , "1");
                    break;
                case 2:
                    strcat(temp , "2");
                    break;
                case 3:
                    strcat(temp , "3");
                    break;
                case 4:
                    strcat(temp , "4");
                    break;       
                case 5:
                    strcat(temp , "5");
                    break;
                case 6:
                    strcat(oct, "6");
                    break;
                case 7:
                    strcat(temp , "7");
                    break;                       
                default:
                   
                    break;
            }    
            }while (num!=0);
        oct = (char *)malloc(strlen(temp) * sizeof(char));
       
        for (i = strlen(temp) - 1, j = 0; i >= 0; i--, j++)
    {
        oct[j] = temp[i];
    }
        printf("El numero en octal es: %s ", oct);
           printf("\n");  

        free(temp);
        temp=NULL;
}
