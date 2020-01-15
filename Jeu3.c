
#include <stdio.h>
#include <string.h>
int main() {
  int vie_j = 35;
  int vie_m = 25;
  int attaque=1;
  int contreattaque=1;
  vie_j=35;
    while((vie_j>0) && (vie_m>0)){
		printf("Point de vie du joueur = %d \n",vie_j);
		printf("Vous attaquez le monstre et il perd 1 point de vie \n");
		vie_m=vie_m-attaque;
	
        vie_j=vie_j-contreattaque;
        printf("La contre attaque du monstre vous enleve 1 point de vie \n");
        printf("Point de vie du monstre %d \n",vie_m);

	}
	
	printf("Point de vie du joueur =%d \n", vie_j);

	
	    if (vie_j <= 0){
    printf("Le monstre a gagne");

    }

    else if (vie_m <= 0){
        printf("Le joueur a gagne");
    }
	return 0;
}
