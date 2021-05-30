#include <stdio.h>
#include <stdbool.h>
#include "functions.h"

int main(){

/*
CARTE carte = {12,PIQUE,true};
afficherCarte(carte);



CARTE carte = lireCarte();
afficherCarte(carte);
retournerCarte(&carte);
afficherCarte(carte);
*/

Liste liste = creer_liste();
CARTE carte = {12,PIQUE,true};

bool reponseEstVide = est_vide(liste);
printf("%s\n", reponseEstVide ? "true" : "false");

visualiser_liste(liste);
ajout_tete(carte, liste);
reponseEstVide = est_vide(liste);
printf("%s\n", reponseEstVide ? "true" : "false");
visualiser_liste(liste);

return 0;


}


