#include <stdio.h>
#include <stdbool.h>
#include "functions.hpp"


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


