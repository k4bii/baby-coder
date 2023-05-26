/***************************************************************
CSCI 240         Program 2     Spring 2023

Programmer: Jakobi McFadden

Section: 2 [Graded by Meka]

Date Due: 02/03/2023

Purpose: This program calculates a course average in 
         the CSCI 240 course
**************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

  float slacker; // Establishing their existence in the program for later use
  float progAvg = 0.000;
  float examquizAvg = 0.000;
  float dailiesAvg = 0.000;

#define TOTAL_PROGRAMS 1 // Symbolic constants for averages
const int TOTAL_PROG_AVG = progAvg;

#define TOTAL_EXAMQUIZ 1
const int TOTAL_EXAMQUIZ_AVG = examquizAvg;

#define TOTAL_DAILIES 1
const int TOTAL_DAILIES_AVG = dailiesAvg;


int main()
{
  cout << fixed << setprecision(3);
  for (int i = 0; i < TOTAL_PROGRAMS; i++) // Using for-loops as I know the exact amount of times I would like to loop 
                                          // for this program
  {
    cout << "What is your program average? ";
    cin >> slacker;
    progAvg += slacker;
  }

  for (int i = 0; i < TOTAL_DAILIES; i++)
  {
    cout << "What is your dailies average? ";
    cin >> slacker;
    dailiesAvg += slacker;
  }

  for (int i = 0; i < TOTAL_EXAMQUIZ; i++)
  {
    cout << "What is your exam/quiz average? ";
    cin >> slacker;
    examquizAvg += slacker;
    
  }
     int temp = 25; // An assumption of what the spaces should look like
  cout << "\n"; // Blank line to match the demonstrated propmt
  cout << left << setw(temp) << "Program Average " << (progAvg)  << fixed << setprecision(3) << endl;
  cout << left << setw(temp) << "Dailies Average" << (dailiesAvg)  << fixed << setprecision(3) << endl;
  cout << left << setw(temp) << "Exam/Quizzes Average" << (examquizAvg)  << fixed << setprecision(3) << endl;
  cout << "\n";
  cout << left << setw(temp) << "Course Average" << (progAvg * .30)  +(dailiesAvg * .15 ) + (examquizAvg * .55)  << fixed << setprecision(3) << endl;
  return 0;
}


