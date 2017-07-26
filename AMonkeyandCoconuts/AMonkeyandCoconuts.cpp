// AMonkeyandCoconuts.cpp : Defines the entry point for the console application.
//
/* File Name: AMonkeyandCoconuts.cpp
* Author: Saul Soto
* Email: ssoto15@fordham.edu
* Description: Program that solves mathematician Martin Gardner's pirates and coconuts math problem.
* Last Changed: 7/25/17
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double n = 0; //Trial and error counter
	int counter = 500;
	double ntracker, initial_n, temp;
	char outornot = 'n';

	int firstP, secP, thirdP, fourthP, fifthP, finalShare;
	while (outornot == 'n') {
		n += 500;
		ntracker = n;
		while (counter > 0) {
			initial_n = ntracker;
			for (int i = 0; i<5; i++) {
				ntracker -= 1; //Coconut given to monkey.
				temp = ntracker / 5.0; //Coconut pile split into fifths.
				ntracker = ntracker - temp; //Fifth taken by each pirate (1,2...,5).
			}

			if (((ntracker - 1) / 5.0) == int(((ntracker - 1) / 5))) {
				finalShare = ((ntracker - 1) / 5.0);
				ntracker = (ntracker - 1) / 5.0;

				double tempTracker = ntracker;
				for (int i = 0; i < 5; i++) {
					tempTracker = (((tempTracker * 5) + 1) / 4);
					switch (i) {
					case 0:
						fifthP = tempTracker;
						break;
					case 1:
						fourthP = tempTracker;
						break;
					case 2:
						thirdP = tempTracker;
						break;
					case 3:
						secP = tempTracker;
						break;
					case 4:
						firstP = tempTracker;
						break;
					}
				}
				outornot = 'y';
				break;
			}
			else {
				ntracker = n - (500 - counter);//numof_runs;
			}
			counter -= 1;

		}
		counter = 500;
	}

	cout << "The starting coconut pile had: " << initial_n << " coconuts." << endl;
	cout << "\n";
	cout << "The final coconut share that each pirate takes is " << finalShare << "." << endl;
	cout << "\n";
	cout << "The first pirate takes " << firstP << " coconuts from the first pile." << endl;
	cout << "The first pirate leaves the island with a total of " << firstP + finalShare << " coconuts." << endl;
	cout << "The second pirate takes " << secP << " coconuts from the second pile." << endl;
	cout << "The second pirate leaves the island with a total of " << secP + finalShare << " coconuts." << endl;
	cout << "The third pirate takes " << thirdP << " coconuts from the third pile." << endl;
	cout << "The third pirate leaves the island with a total of " << thirdP + finalShare << " coconuts." << endl;
	cout << "The fourth pirate takes " << fourthP << " coconuts from the fourth pile." << endl;
	cout << "The fourth pirate leaves the island with a total of " << fourthP + finalShare << " coconuts." << endl;
	cout << "The fifth pirate takes " << fifthP << " coconuts from the fifth pile." << endl;
	cout << "The fifth pirate leaves the island with a total of " << fifthP + finalShare << " coconuts." << endl;
	cout << "\n";
	cout << "And the monkey is given 6 coconuts." << endl;
	cout << "Continue? ";
	char response;
	cin >> response;

	return 0;
}

