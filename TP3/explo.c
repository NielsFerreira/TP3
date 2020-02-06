#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
	
	printf("Bonjour aventurier !\n");
	
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
	}
}