#include <stdio.h>

/*1-2 table spoons of coffee represents every 6 ounces of water. 
 *6 ounces is equal to .75 of a single US cup. The user will enter an amount of coffee the wish to have (in cups) and the program will calculate the how much coffee (grounds are needed and how many cups of water are needed) Once this is done it will display the corresponding coffee cups as images.*/


int makeCalc(int *cups){
	int ounces = 6;
	float usCup = .75;

	int number_of_tbls = *cups / (usCup / ounces);
	return 	number_of_tbls;
}

main(){
	int *cups;
	char [] *name;

	puts("Please enter your first name: ");
	scanf("%c", &name);
	puts("Enter desired number of cups of Coffee: ");
	scanf("%d", &cups);
	
	int numCoffeeTbl = makeCalc(*cups);
	
	printf("%c Wants %d number of cups.", &name, &cups);
	if(&cups > 5){
		puts("Woah! Careful, more than 5 cups can be dangerous.");
	}
	for(int i = 0; i <= numCoffeeTbl; i++){
		system("Hot_Coffe_Emoji_large.png");
	}
}

