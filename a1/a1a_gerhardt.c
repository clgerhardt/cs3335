/*
Christian Gerhardt, CS3335, Fall 2018
*/
#include <stdio.h>

int makeCalc(int cups){
	int tble_spoons = 2;
	int number_of_tbls;
	number_of_tbls = cups * tble_spoons;
	return number_of_tbls;
}

main(){
	int cups;
	char fi, mi, li;


	puts("Please enter your first initial:  ");
	scanf("%c", &fi);
	puts("Please enter your middle initial: ");
	scanf(" %c", &mi);
	puts("Please enter your last initial: ");
	scanf(" %c", &li);
	puts("Enter desired number of cups of Coffee: ");
	scanf(" %d", &cups);
	
	int numCoffeeTbl = makeCalc(cups);
	
	printf("\n%c.%c.%c  wants %d number of cups.\n", fi, mi, li, cups);
	if(cups > 2){
		puts("\nWoah! Careful, more than 5 cups can be dangerous.\n");
	}
	double holdCups[cups];
	for(int i = 0; i < cups; i++){
		holdCups[i] = 1.25;
		printf("Cup %d will cost: %.2f\n", i+1, holdCups[i]);
	}

}

