#include <stdio.h>
#include <stdbool.h>
#include "functions.hpp"

int main(){

/*
COULEUR couleurChoisi = PIQUE;
CARTE carte = {12,couleurChoisi,true};
afficherCarte(carte);
*/

CARTE carte = lireCarte();
afficherCarte(carte);
retournerCarte(&carte);
afficherCarte(carte);

return 0;


}


