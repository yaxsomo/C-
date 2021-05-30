#include <stdio.h>
#include "functions.h"


/*
EXCERCISE 1
*/

void echange(double *premier,double *deuxieme){
double temp;
temp = *deuxieme;
*deuxieme = *premier;
*premier = temp;
}


/*
EXCERCISE 2
*/
void echange3(double *premier,double *deuxieme, double *troisieme){

echange(premier,troisieme);
echange(deuxieme,troisieme);

}

/*
EXCERCISE 3
Dans Tp 5
*/
