#include<stdio.h>
#define SIZE_VET 49
int main () {

    char vet[SIZE_VET];

    for (int i = 0; i < SIZE_VET; i++)
    {
        scanf (" %c ", &vet[i]);
    }
    
    int size_cod = 0;

    scanf ("%i", &size_cod);

    int code[100];

    for (int i = 0; i < size_cod; i++)
    {
        scanf ("%i", &code[i]);
    }
    
    for (int i = 0; i < size_cod; i++)
    {
        for (int j = 0; j < SIZE_VET; j++)
        {
            if (j == code[i]){
                if (vet[j] == '_'){
                    printf (" ");
                } else if (vet[j] == 'E'){
                    printf ("\n");
                } else {
                    printf ("%c", vet[j]);
                    break;
                }
            }
        }
    }

    return 0;
}

/* 

CASE TEST:

INPUT:
m ^ j v 4 8 l ? a 3 o i . k q p s h u r ! x y e 6 1 : ) d g n b , f c 0 ' 2 - 9 z w t E 5 ~ ( 7 _
267
16 10 36 48 10 16 48 16 13 8 42 23 16 48 16 8 31 23 0 43 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 43 8 29 10 19 8 48 23 18 48 16 23 11 43 23 21 8 42 8 0 23 30 42 23 48 34 10 0 10 48 8 30 28 8 19 48 28 23 48 16 13 8 42 23 43 31 10 0 48 19 23 34 10 0 23 34 8 19 32 48 15 10 28 23 19 48 8 30 28 8 19 48 28 23 48 23 16 14 18 23 11 42 11 43 15 10 11 16 48 23 18 48 0 23 48 6 23 0 31 19 10 48 28 23 48 42 18 28 10 48 11 19 0 8 45 10 43 23 18 48 8 30 28 8 3 8 48 28 23 48 16 13 8 42 23 48 42 8 0 31 23 36 0 43 10 48 17 10 0 23 0 48 14 18 8 30 28 10 48 8 30 28 8 48 28 23 48 16 13 42 43 30 8 45 10 48 8 30 28 8 48 28 23 48 16 13 8 42 23 48 34 10 0 48 30 11 30 29 18 23 36 0 43 46 12 12 12 27 43

OUTPUT:
tudo claro
ainda na~o era o dia
era apenas o raio

 */