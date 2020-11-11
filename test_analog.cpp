#include <iostream>
#include <sstream>
#include <fstream>
#include "AnalogIn.h"

using namespace std;

#define ADC_PATH "/sys/bus/iio/devices/iio:device0/in_voltage"
#define ADC 0

int main(int argc, char* argv[]){
	AnalogIn createdObject;
	createdObject.setNumber(0);

	createdObject.getNumber();

	int storeNumber = createdObject.readADCsample();
	cout << "The value of the ADC is: " <<  storeNumber << endl; 
}


