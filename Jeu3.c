#include <stdio.h>
#include <string.h>
int main() {
  int vie_j = 35;
  int vie_m = 35;
  int attaque=1;
  int dead=0;
  int contreattaque=1;
  vie_j=35;
while(vie_j>0){
	if(vie_j!=0){
		printf("Point de vie du joueur = %d \n",vie_j);
		printf("Vous attaquez le monstre et il perd 1 point de vie \n");
		vie_j=vie_j-attaque;
	
}
vie_m=vie_m-contreattaque;
printf("La contre attaque du monstre vous enleve 1 point de vie \n",vie_m);
printf("Point de vie du monstre %d \n",vie_m);

	}
	printf("Point de vie du monstre =%d \n", dead);
	return 0;
}
