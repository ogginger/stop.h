//stop.h: Stops the application and waits for user input to continue.

#pragma once
#include <iostream>

using namespace std;

void stop() {
	cout << "Please press any key followed by enter to continue..." << endl;
	char stop;
	cin >> stop;
}
