// AMonkeyandCoconuts.cpp : Defines the entry point for the console application.
//
/* File Name: AMonkeyandCoconuts.cpp
* Author: Saul Soto
* Email: ssoto15@fordham.edu
* Description: Program that solves mathematician Martin Gardner's pirates and coconuts math problem.
* Last Changed: 7/24/17
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double n = 0; //Trial and error counter
	int counter = 500;
	int numof_runs = 1;
	double ntracker, initial_n, temp;
	char outornot = 'n';

	while (outornot == 'n') {
		n += 500;
		ntracker = n;
		while (counter > 0) {
			initial_n = ntracker;
			for (int i = 0; i<5; i++)
			{
				ntracker -= 1; //Coconut given to monkey.
				temp = ntracker / 5.0; //Coconut pile split into fifths.
				ntracker = ntracker - temp; //Fifth taken by each pirate (1,2...,5).
			}

			if (((ntracker - 1) / 5.0) == int(((ntracker - 1) / 5)))
			{
				outornot = 'y';
				break;
			}
			else {
				ntracker = n - numof_runs;
			}

			numof_runs += 1;
			counter -= 1;

		}
		counter = 500;
		numof_runs = 1;
	}

	cout << "The starting coconut pile had: " << initial_n << " coconuts" << endl;

	cout << "Continue? ";
	char response;
	cin >> response;

	return 0;
}

