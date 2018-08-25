/*
Christian Gerhardt, CS3335, Fall 2018
*/
#include <stdio.h>
#include <stdlib.h>

const int attempts = 10;

main(){
	srand(time(NULL));

	puts("The computer has generated a random number between 0 & 100. \n You have 10 attempts to figure out the number! Good Luck!");
	int rand_num =  (rand() % (100- 0 + 1)) + 0;
	for(int i = 1; i <= attempts; i++){
		int guess;
		puts("User, please make a quess. \n");
		scanf("%d", &guess);
		if(i > attempts){
			printf("Game Over! The Number was %d.\n", rand_num);	
			break;
		}
		else if(guess == rand_num){
			printf("Congrats on getting the right number %d.\n", guess);
			break;
		}
		else if(guess > rand_num){
			printf("guess %d, too high! You have %d attempts left. \n", guess, attempts - i);
		
		}
		else{
			printf("guess %d, too low! You have %d attempts left. \n", guess, attempts - i);
		}
	
	}

	printf("Thanks for playing!");

}
