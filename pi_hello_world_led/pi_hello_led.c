#include <stdio.h>
#include <wiringPi.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int pin;
	int blinkDelay;
	wiringPiSetup();
	pinMode(0, OUTPUT);
	pinMode(2, OUTPUT);
	int i = 0;
	int isOdd = 0;
	srand(time(NULL));
	
	printf("Clearing pins.\n");
	digitalWrite(0, LOW);
	digitalWrite(2, LOW);
	int pinsCleared;
	int pinsOn;
	printf("Pins Cleared.\n");
	printf("Turning Pins on.\n");
	printf("Are both pins cleared? 1 for Y 0 for N. \n");
	scanf("%d", &pinsCleared);
	digitalWrite(0, HIGH);
	digitalWrite(2, HIGH);
	printf("Are both pins on? 1 for Y 0 for N. \n");
	scanf("%d", &pinsOn);
	digitalWrite(0, LOW);
	digitalWrite(2, LOW);
	if(pinsCleared == 1 && pinsOn == 1)
	{
		for(i; i < 200; i++)
		{
			int r = rand();
			
			
			isOdd = r % 2 == 0 ? 0 : 1;
			if(isOdd == 0)
			{
				digitalWrite(0, HIGH); 
				digitalWrite(2, LOW);
				printf("Blue should be on.\n");
			}
			else
			{
				digitalWrite(2, HIGH); 
				digitalWrite(0, LOW);
				printf("Green should be on.\n");
			}
			sleep(1);
		}	
		digitalWrite(0, HIGH);
		digitalWrite(2, HIGH);
		printf("Finished iterating...clearing pins.\n");
		
		digitalWrite(0, LOW);
		digitalWrite(2, LOW);
		printf("Exiting...\n");
	}
	else
	{
		printf("Pins not cleared, please check the circuit. Program will exit.\n");
		return 0;
	}
	
	return 0;
}
