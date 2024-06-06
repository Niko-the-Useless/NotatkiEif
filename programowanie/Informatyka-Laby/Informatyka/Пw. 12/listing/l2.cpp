#include <iostream>
typedef enum State {
	led_off,
	led_on,
	second_led_on
} State_t;

void turnOnLed() {
	std::cout<<"Led 1 on \n";
}
void turnOffLed() {
	std::cout<<"Led 1 off \n";
}
void turnOnSecondLed() {
	std::cout<<"Led 2 on \n";
}
void turnOffSecondLed() {
	std::cout<<"Led 2 off \n";
}

unsigned short getNextBit(unsigned short bitNum){
		bool bits[10] = {1,0,1,1,0,0,1,1,0,1};
		return bits[bitNum];
}

int main(){
	State_t status = led_off;
	unsigned short bitNum = 0;
	while (bitNum<10){
		unsigned short nextBit = getNextBit(bitNum);
		switch (status) {
			case led_off:
				if (nextBit == 1) {
					turnOnLed();
					status = led_on;
				}
				break;
			case led_on:
				if (nextBit == 0) {
					turnOffLed();
					status = led_off;
				} else {
					turnOnSecondLed();
					status = second_led_on;
				}
				break;
		case second_led_on:
			if (nextBit == 0) {
				turnOffSecondLed();
				status = led_on;
			}
			break;
		}
		bitNum++;
	}
	return 0;
}
