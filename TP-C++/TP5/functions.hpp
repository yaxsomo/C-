typedef enum{
	TREFLE, CARREAU, COEUR, PIQUE
} COULEUR;


struct CARTE{
	int rang;
	int couleur;
	bool visible;
};

void afficherCarte(CARTE carte);

CARTE lireCarte();

void retournerCarte(CARTE* pcarte);
