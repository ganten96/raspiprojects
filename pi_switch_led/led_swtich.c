


#include <stdio.h>
#include <wiringPi.h>
#include <stdlib.h>
#include <time.h>

void option(int &op)
{
	if(op == 1)
	{
		//blink
	}
	if(op == 2)
	{
		//solid
	}
	if(op == 3)
	{
		//change name
	}
}

int main(void)
{
	//setup and test pins
	
	char* name1, name2, currentName;
	int option;
	wiringPiSetup();
	pinMode(0, OUTPUT); //gpio pin 17
	pinMode(2, OUTPUT); //gpio pin 27 (21 on v1 board)
	srand(time(NULL));
	
	printf("Testing pins...\n\0");
	printf("Pin 17 should be on...\n");
	digitalWrite(0, HIGH);
	printf("Pin 27 should be on...\n");
	digitalWrite(2, HIGH);
	printf("If both LEDs are on, the circuit is good. If they either is off, please check your circuit!\n");
	sleep(2);
	digitalWrite(2, LOW);
	digitalWrite(0, LOW);
	printf("This program turns two LEDs on or off based on an input string.\n\0");
	printf("Please input the first name you want to store.\n");
	scanf("%s", &name1);
	printf("Please input the second name you want to store.\n");
	scanf("%s", &name2);
	
	while(option != 4)
	{
		printf("Please select an option\n 1: Blink LED\n 2: Solid LED\n 3: Change Name\n 4: Exit\n");printf("Please select an option\n 1: Blink LED\n 2: Solid LED\n 3: Change Name\n 4: Exit\n");
		scanf("%d", &option);
		
		
	}
	 
	
	
	return 0;
}
