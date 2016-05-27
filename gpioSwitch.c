#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>

#define SW 23 // gpio 23

int main(){
	int dr;
	if(wiringPiSetupGpio() == -1)
		return 1;

	setbuf(stdout, NULL);
	pinMode(SW, INPUT);
	pullUpDnControl(SW, PUD_UP);

	while(1){
		delay(10);
		if((dr = digitalRead(SW)) == 1){
			printf("%d:------",dr);
		}else{
			printf("%d:------",dr);
			printf("create a new process");
			system("./gpioLed2");
		}

	}
	return 0;
}

			
