#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Zer the number guessing game. The rule is simple guess
 * the number between 1 - 10 on easy or 1 to 100 in hard
 * you only have one guess so don't mess up.
 * by conner miller
 */

int easy()
{
	int input1;
	int anw;
	int min1 = 1;
	int max1 = 10;
        srand(time(NULL) + getpid());	

	anw = rand() % ((max1+1)-min1) + min1;
	printf("Type what you think is the number\n");
	scanf("%d", &input1);
	if (input1 == anw)
	{
		printf("Congrats you found out the number\n");
		return 0;
	}
	else if (input1 <= anw)
	{
		printf("Sorry you where short an number or two\n");
		return 0;
	}
	else if (input1 >= anw)
	{
		printf("Sorry but you where over an number or two\n");
		return 0;
	}
}

int hard()
{
	int input2;
	int anw2;
	int min2 = 1;
	int max2 = 100;
        srand(time(NULL) + getpid());	

	anw2 = rand() % ((max2+1)-min2) + min2;
	printf("Type what you think is the number\n");
	scanf("%d", &input2);
	if (input2 == anw2)
	{
		printf("Congrats you found out the number\n");
		return 0;
	}
	else if (input2 <= anw2)
	{
		printf("Sorry you where short an number or two\n");
		return 0;
	}
	else if (input2 >= anw2)
	{
		printf("Sorry but you where over an number or two\n");
		return 0;
	}
}



int main() 
{
	int input;

	printf("Welcome to Zer\n");
	printf("The number guessing game\n");
	printf("1. For easy \n");
	printf("2. For hard \n");
	printf("3. To quit  \n");
	scanf("%d",&input);
	if(input == 1)
	{
		easy();
	}
	else if (input == 2)
	{
		hard();
	}
      
	else if (input == 3)
	{
		printf("Thanks for playing Zer 1.0\n");
		return 0;
	}

}

