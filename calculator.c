/* FUNCION SUMA */
/** \brief  Suma 2 valores del tipo float (a - b) y retorna con la suma de ambos(total).
 *
 * \param 2 valores del tipo float (a , b)
 * \param
 * \return total (La suma de a + b)
 *
 */

float funtionSuma(float a, float b){
    float total;

    total = a + b;

    return total;

}

/* FUNCION RESTA */
/** \brief Resta 2 valores del tipo float (a - b) y retorna con la resta de ambos (total).
 *
 * \param 2 valores del tipo float (a , b)
 * \param
 * \return total (La resta de a - b)
 *
 */

float funtionResta(float a, float b){
    float total;

    total = a - b;
    return total;
}

/* FUNCION DIVISION */
/** \brief Calcula la division de a / b y retorna el total.
 *
 * \param 2 valores del tipo float (a , b)
 * \param
 * \return total (La division de a / b)
 *
 */
float funtionDivision(float a, float b){
    float total;

    if(b == 0){
        total = 0;
        return total;
    }else{
        total = a / b;
    }

    return total;
}

/* FUNCION MULTIPLICACION */
/** \brief Calcula la Multiplicacion de a * b y retorna el total.
 *
 * \param 2 valores del tipo float (a , b)
 * \param
 * \return total (la Multiplicacion de a * b)
 *
 */
float funtionMultiplicacion(float a, float b){
    float total;

    total = a * b;

    return total;
}

/* FUNCION FACTORIAL */
/** \brief Calcula el factorial de un numero del tipo Int y retorna el total.
 *
 * \param 1 valores del tipo int (a)
 * \param
 * \return fact (El factorial del Int)
 *
 */
int funtionFactorial(int n){
    int i;
    int fact=1;
        if(n >= 0){
            for(i=1; i<=n; i++){
                fact = fact * i;
            }
        }
        else{
            for(i=-1; i>=n; i--){
                fact = fact * i;
            }
                fact =  -fact;
        }
    return fact;
}



