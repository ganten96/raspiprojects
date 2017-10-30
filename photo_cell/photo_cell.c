#include <stdio.h>
#include <wiringPi.h>
#include <stdlib.h>

int main()
{
    wiringPiSetup();
    //pin 18 photo resistor
    int pin = 1;
    int i;
    int counter = 0;
    int isLight = 0;
    int threshold = 8000;
    printf("Start reading from pin %d.\n", pin);
    while(1)
    {
        int read = readInput(pin);
        counter++;
        isLight = read > threshold ? 0 : 1;
        isLight > 0 ? printf("Light\n") : printf("Dark\n");
    }
}

int readInput(int pin)
{
    int reading = 0;
    pinMode(pin, OUTPUT);
    digitalWrite(pin, 0);
    usleep(1000); //1k microseconds
    pinMode(pin, INPUT);
    while(digitalRead(pin) == LOW)
    {
        reading++;
    }
    return reading;
}