#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include "calculator.h"

char menu(void);

int main()
{
    char seguir = 'n';
    float operatorX;
    float operatorY;

    system("cls");

    printf("Ingrese el primer Operador: ");
    scanf("%f",&operatorX);

    printf("Ingrese el segundo Operador: ");
    scanf("%f",&operatorY);

   do{
        system("cls");

        printf("Sus operadores son %0.2f y %0.2f .\n",operatorX,operatorY);

        switch(menu()){
            case 'a':
                printf("\n----- Usted eligio Sumar ----- \n");
                float suma;
                int numES1,numES2,sumaES;;

                suma = funtionSuma(operatorX, operatorY);

                numES1 = floor(operatorX);
                numES2 = floor(operatorY);
                sumaES = floor(suma);

                    if(suma  == sumaES + 0.00){
                        if(operatorX != numES1 || operatorY != numES2){
                            printf("\nLa suma de %0.2f  y %0.2f  es %d  .\n", operatorX, operatorY, sumaES);
                        }else{
                            printf("\nLa suma de %d  y %d  es %d  .\n", numES1, numES2, sumaES);
                        }
                    }
                    else{
                        printf("\nLa suma de %0.2f y %0.2f es %0.2f .\n", operatorX, operatorY, suma);
                    }

                system("pause");
                break;
            case 'b':
                printf("\n----- Usted eligio restar ----- \n");
                float resta;
                int numER1,numER2,restaER;

                resta = funtionResta(operatorX, operatorY);

                numER1 = floor(operatorX);
                numER2 = floor(operatorY);
                restaER = floor(resta);

                    if(resta  == restaER + 0.00){
                        if(operatorX != numER1 || operatorY != numER2){
                            printf("\nLa resta de %0.2f  y %0.2f  es %d  .\n", operatorX, operatorY, restaER);
                        }else{
                            printf("\nLa resta de %d  y %d  es %d  .\n", numER1, numER2, restaER);
                        }
                    }
                    else{
                        printf("\nLa resta de %0.2f y %0.2f es %0.2f .\n", operatorX, operatorY, resta);
                    }

                system("pause");
                break;
            case 'c':
                printf("\n----- Usted eligio dividir----- \n");
                float division;
                int numED1,numED2,dividirED;

                if(operatorY == 0){
                    printf("Error. No es posible dividir por cero \n");
                }
                else{
                    division = funtionDivision(operatorX, operatorY);

                    numED1 = floor(operatorX);
                    numED2 = floor(operatorY);
                    dividirED = floor(division);

                        if(division  == dividirED + 0.00){
                            if(operatorX != numED1 || operatorY != numED2){
                                printf("\nLa division de %0.2f  y %0.2f  es %d  .\n", operatorX, operatorY, dividirED);
                            }else{
                                printf("\nLa division de %d  y %d  es %d  .\n", numED1, numED2, dividirED);
                            }
                        }
                        else{
                            printf("\nLa division de %0.2f y %0.2f es %0.2f .\n", operatorX, operatorY, division);
                        }
                }

                system("pause");
                break;
            case 'd':
                printf("\n----- Usted eligio multiplicar -----\n");
                float multiplicacion;
                int numEM1,numEM2,multiplicacionEM;

                multiplicacion = funtionMultiplicacion(operatorX, operatorY);

                numEM1 = floor(operatorX);
                numEM2 = floor(operatorY);
                multiplicacionEM = floor(multiplicacion);

                    if(multiplicacion  == multiplicacionEM + 0.00){
                        if(operatorX != numEM1 || operatorY != numEM2){
                            printf("\nLa multiplicacion de %0.2f  y %0.2f  es %d  .\n", operatorX, operatorY, multiplicacionEM);
                        }else{
                            printf("\nLa multiplicacion de %d  y %d  es %d  .\n", numEM1, numEM2, multiplicacionEM);
                        }
                    }
                    else{
                        printf("\nLa multiplicacion de %0.2f y %0.2f es %0.2f .\n", operatorX, operatorY, multiplicacion);
                    }

                system("pause");
                break;
            case 'e':
                printf("\n----- Usted eligio Factorial----- \n");
                int factorial,factorial2,operatorIntX,operatorIntY;
                float factorialF1, factorialF2;

                operatorIntX = operatorX;
                operatorIntY = operatorY;

                factorial = funtionFactorial(operatorIntX);
                factorial2 = funtionFactorial(operatorIntY);

                factorialF1 = floor(factorial);
                factorialF2 = floor(factorial2);

                if(factorial == factorialF1 + 0.00 || factorial2 == factorialF2 + 0.00  ){
                    if(operatorX != operatorIntX || operatorY != operatorIntY){
                        printf("Error. No hay factorial de un numero Decimal \n");
                        system("pause");
                        break;
                    }
                    else{
                        printf("\nEl factorial de %d es %d y El factorial de %d es %d.\n",operatorIntX , factorial , operatorIntY,factorial2 );
                    }
                }
                else{
                    printf("\nEl factorial de %d es %d y El factorial de %d es %d.\n",operatorIntX , factorial , operatorIntY,factorial2 );
                }
                system("pause");
                break;
            case 'f':
                printf("\nUsted eligio Cambiar los Operadores\n");
                main();
            case 'g':
                printf("\nUsted eligio Salir\n");
                printf("Confirma salida? ");
                seguir = getche();
                break;
            default:
                printf("\n\nOpcion Invalida\n\n");
                system("pause");
                break;
        }

    }while(seguir == 'n');

}

char menu(){
     char opcion;

     printf("----- Menu de Operaciones -----\n");
     printf("a- Sumar\n");
     printf("b- Restar\n");
     printf("c- Dividir\n");
     printf("d- Multiplicar\n");
     printf("e- Factorial\n");
     printf("f- Cambiar Operadores\n");
     printf("g- Salir\n");
     printf("\n");
     printf("Ingrese opcion: ");
     opcion = getche();

     return(opcion);
}
