#include <stdio.h>
#define LIMITE 20

int main()
{
    //const int LIMITE = 20 ;
    int n ;
    do {
            printf("Donnez un entier autours de %d : \n", LIMITE) ;
            scanf("%d", &n) ;
            switch (n)
            {
                case LIMITE-1 : printf("Limite-1\n") ; break ;
                case LIMITE : printf("Limite\n") ; break ;
                case LIMITE+1 : printf("Limite+1\n") ; break ;
                default : printf("Default\n") ; break ; ;
            }
        } while (n!=0) ;
    printf("Fin du programme\n") ;
}