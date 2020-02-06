#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	printf("Bonjour aventurier !\n");
	
	int destination;
	
	printf("\n Tapez '1' pour aller a Velika ou tapez '2' pour aller a Hautegarde \n");
	
	scanf("%d",&destination);
	
	if(destination == 1){
		printf("En avant toute pour Velika !");
		
		return 0;
	}else
		if(destination == 2){
		printf("Direction Hautegarde !");
		
		return 0;
	}
}