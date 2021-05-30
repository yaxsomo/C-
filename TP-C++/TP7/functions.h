#ifndef CARTE_H_
#define CARTE_H_
typedef enum {
CARREAU, COEUR, PIQUE, TREFLE
} COULEUR;
typedef struct {
int rang;
int couleur;
bool visible;
} CARTE;
struct maillon{
CARTE carte;
struct maillon* suivant;
};
typedef struct maillon* Liste;
#endif /* CARTE_H_ */
void afficherCarte(CARTE carte);
CARTE lireCarte();
void retournerCarte(CARTE* pcarte);
Liste creer_liste(void);
bool est_vide(Liste L);
void visualiser_liste(Liste L);
Liste ajout_tete(CARTE carte, Liste L);
Liste supprimer_tete(Liste L);
Liste supprimer_n(int n, Liste L);
