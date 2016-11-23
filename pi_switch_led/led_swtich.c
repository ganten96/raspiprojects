


#include <stdio.h>
#include <wiringPi.h>
#include <stdlib.h>
#include <time.h>

void option(int &op, char* name)
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
		
	}
}

int main(void)
{
	//setup and test pins
	char* name1, name2, name3, currentName;
	int option;
	char* names [3][50];
	wiringPiSetup();
	pinMode(0, OUTPUT); //gpio pin 17
	pinMode(1, OUTPUT); //gpio pin 18
	pinMode(2, OUTPUT); //gpio pin 27 (21 on v1 board)
	
	printf("Testing pins...\n\0");
	printf("Pin 17 should be on...\n");
	digitalWrite(0, HIGH);
	printf("Pin 27 should be on...\n");
	digitalWrite(2, HIGH);
	printf("Pin 18 should be on...\n");
	digitalWrite(1, HIGH);
	printf("If all LEDs are on, the circuit is good. If they either is off, please check your circuit!\n");
	sleep(2);
	digitalWrite(2, LOW);
	digitalWrite(0, LOW);
	digitalWrite(1, LOW);
	printf("This program turns LEDs on or off based on an input string.\n\0");
	printf("Please input the first name you want to store.\n");
	scanf("%s", names[0]);
	printf("Please input the second name you want to store.\n");
	scanf("%s", names[1]);
	printf("Please input the third name you want to store.\n");
	scanf("%s", names[2]);
	
	while(option != "4")
	{
		printf("Please Type in a name. If a name is in the array, an LED will light up. Press 4 to exit.\n");
		scanf("%s", &option);
	}
	 
	return 0;
}
