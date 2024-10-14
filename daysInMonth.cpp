/*
Title: Chapter 4 Exercise 10 - Days in a month
File Name: daysInMonth.cpp
Programmer: Kason Steiner
Date: 10/2024
Write a program that asks the user to enter the month (letting the user enter an integer in the range of 1 through 12) 
and the year. The program should then display the number of days in that month. Should be able to determine leap years 
in calculations. 
*/
#include <iostream>

using namespace std;
int main() { 

  int month = 0;
  int year = 0;


  cout << "Enter a month (1-12): ";
  cin >> month;

   while (month < 1 || month > 12)
     {
       cout << "Invalid month. Please enter a month (1-12): ";
       cin >> month;
     }

  cout << "Enter a year: ";
  cin >> year;
  

    switch(month)
      {
      case 1:
        cout << "January of year " << year << " has 31 days";
            break;
      case 2:
        if(year % 100 == 0 && year % 400 == 0)
            cout << "February of year " << year << " has 29 days";
        else if (year % 100 != 0 && year % 4 == 0)
          cout << "February of year " << year << " has 29 days";
        else
          cout << "February of year " << year << " has 28 days";
        break;
      case 3:
        cout << "March of year " << year << " has 31 days";
            break;
      case 4:
        cout << "April of year " << year << " has 30 days";
            break;
      case 5:
        cout << "May of year " << year << " has 31 days";
            break;
      case 6:
        cout << "June of year " << year << " has 30 days";
            break;
      case 7:
        cout << "July of year " << year << " has 31 days";
            break;
      case 8:
        cout << "August of year " << year << " has 31 days";
            break;
      case 9:
        cout << "September of year " << year << " has 30 days";
            break;
      case 10:
        cout << "October of year " << year << " has 31 days";
            break;
      case 11:
        cout << "Novemeber of year " << year << " has 30 days";
      case 12:
        cout << "December of year " << year << " has 31 days";
            break;
        
    default:
        cout << "Invalid, please try again";
      }


  return 0;
}