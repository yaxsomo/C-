#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "functions.h"


const char* correspondances[4] =  {"TREFLE", "CARREAU", "COEUR","PIQUE"};
const char* couleursStr[4] =  {"AS", "VALET", "DAME","ROI"};

void afficherCarte(CARTE carte){


if (carte.visible == true){
	if (carte.rang == 1){
	printf("%s de %s\n", couleursStr[carte.rang-1], correspondances[carte.couleur]);
	}else if (carte.rang >=10 && carte.rang<=12){
	     printf("%s de %s\n",couleursStr[carte.rang-9], correspondances[carte.couleur]);
	}else{
             printf("%d de %s\n", carte.rang, 		     correspondances[carte.couleur]);
	}
} else {
       printf("Carte cachee\n");
}
}



CARTE lireCarte(){
int rang, couleur;

printf("Inserer le rang de la carte(0..13): ");
scanf("%d", &rang);
printf("Inserer la couleur de la carte(0..3): ");
scanf("%d", &couleur);

CARTE carte = {rang,couleur,true};
return carte;

}

void retournerCarte(CARTE* pcarte){

if (pcarte->visible == true){
pcarte->visible = false;
}else{
pcarte->visible = true;

}

}


Liste creer_liste(void){
return NULL;
}


bool est_vide(Liste L){
if(L == NULL){
	return true;
}
return false;
}


void visualiser_liste(Liste L){
if(est_vide(L)){
		printf("Rien à afficher, la liste est vide.\n");
	return;
} else {
	while(L != NULL){
	CARTE c = L->carte;
	afficherCarte(c);
	printf("OK");
	L = L->suivant;
	}
}
}


Liste ajout_tete(CARTE carte, Liste L){

Liste element;

element = malloc(sizeof(*element));

if (element == NULL){
fprintf(stderr, "Error: unable to allocate memory");
exit(1);
}
element->carte = carte;

if(est_vide(L)){
element->suivant = NULL;
} else {
element->suivant = L;
}

return element;

}
