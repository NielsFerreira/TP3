#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int deplacement;


/*struct Lieu	{
	 int nom;
	 int description;
	 int difficulte;
	 int adjacent;
 }*/

// typedef struct Lieu lieu;


int main(){
	
	char choix[4];
	char choix1[4] = "oui";
	char choix2[4] = "non";
	
	char lieu[30];
	char lieu1[30] = "Bastion";
	char lieu2[30] = "Marais-Tuwangi";
	char lieu3[30] = "Val-Aureum";
	
	// lieu joueur ={1};
	
	// lieu lieu1 ={2};
	// lieu lieu2 ={3};
	// lieu lieu3 ={4};
	
	printf("Choisissez une destination parmi les suivantes :\n - Bastion:\n - Marais-Tuwangi:\n - Val-Aureum:\n");
	
	scanf("%s", lieu);
	
	if(strcmp(lieu, lieu1)==0){
		printf("Votre choix est : Bastion. C'est endroit est un donjon, des fideles se cachent a l'interieur. Il faut etre bien equipe pour pouvoir y acceder.\n La difficulte est placee a : 10.\n\nSouhaitez-vous toujours y aller ?");
		
		scanf("\n%s",&choix);
		
		if(strcmp(choix, choix1)==0){
			printf("Vous prenez la route pour le donjon");
		}else
		if(strcmp(choix, choix2)==0){
		printf("Vous renoncez a aller au donjon");
		
		return 0;
		}
	}else
		if(strcmp(lieu, lieu2)==0){
			printf("Votre choix est : Marais Tuwangi. C'est endroit est un peu marecageux; D'etranges creatures y vivent et on des installations originales. Souvent font-ils la fete.\n La difficulte est placee a : 6.\n\nSouhaitez-vous toujours y aller ?");
			
			scanf("\n%s",&choix);
			
			if(strcmp(choix, choix1)==0){
				printf("En route pour le Marais Tuwangi");
			}else
			if(strcmp(choix, choix2)==0){
			printf("Vous renoncez a aller au marais");
			
			return 0;
			}
	}else
		if(strcmp(lieu, lieu3)==0){
			printf("Votre choix est : Val Aureum.C'est endroit est desertique. C'est un canyon. Il y a des insectes ayant la taille d'un homme.\n La difficulte est placee a : 13.\n\nSouhaitez-vous toujours y aller ?");
			
			scanf("\n%s",&choix);
			
			if(strcmp(choix, choix1)==0){
				printf("Vous allez dans le canyon");
			}else
			if(strcmp(choix, choix2)==0){
			printf("Vous renoncez a aller au canyon");
			}
		}
	
	/*printf("Bonjour aventurier !\n");
	
	char destination[100];
	char destination1[100] = "Velika";
	char destination2[100] = "Hautegarde";
	
	
	printf("\n Choisissez votre destination : \n");
	
	printf(" -Velika :\n");
	printf(" -Hautegarde :\n");
	
	scanf("%s",&destination);
	
	if(strcmp(destination, destination1)==0){
		
		printf("En avant toute pour Velika !");
		
		return 0;
	}else
		if(strcmp(destination, destination2)==0){
			
		printf("Direction Hautegarde !");
		
		return 0;
	}else
		if(strcmp(destination, destination1)==1){
			if(strcmp(destination, destination2)==1){
				
				printf("Vous ne pouvez pas aller par la.\n");
		
		}
	}*/
		
}