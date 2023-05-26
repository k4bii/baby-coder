/***************************************************************
CSCI 240         Program 1     Spring 2023

Programmer: Jakobi McFadden

Section: 2 [Graded by Teja]

Date Due: 01/27/2023

Purpose: This program calculates and displays a goals against
         average for an NHL goalie.
***************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	
int goals;

cout << "Enter the number of goals allowed: ";
cin >> goals;

float minutes;

cout << "Enter the number of minutes of ice time: ";
cin >> minutes;
  
cout << "Goals Against Average: "
     << (goals * 60) / minutes << endl;

return 0;
}
