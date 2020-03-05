/*This program calculates the GPA
of a student based on the number of
classes they took. The user is asked
how many classes they took, and then
they are asked what grades they got.*/

#include<iostream>
#include<string>
using namespace std;

void calcGPA(int, double, double);

void greeting();
int main()
{
greeting();
int numClasses; //initialize a variable that holds the user's input for number of classes.
double score; //holds the input for each score
double total = 0; //holds running total
cout << "How many classes did you take this semester?\n";
cin >> numClasses;
//to ensure that non-numeric values are not entered.
if (numClasses == NULL || numClasses < 0)
{
cout << "You need to enter a valid number, and it needs to be positive.\n";
main();
}
else
cout << "What were your grades for each of those classes?\n";
for (int count = 0; count < numClasses; count++)
{
cin >> score;
total += score;
}
calcGPA(numClasses, total, score);
}

void greeting()
{
cout << "#############################################\n";
cout << "GPA Calculator\nby The Mass Transit Honchkrow \n";
cout << "#############################################\n";
}

void calcGPA(int numClasses, double total, double average)
{
average = total / numClasses;
cout << "The average for your classes is " << average << ".\n";
if (average > 86.5)
cout << "That's high enough to land you on the dean's list.\n";
else if (average > 93.0)
cout << "That's high enough to land you on the president's list.\n";
else if (average < 70)
cout << "You are in academic danger with those grades.\n";

}
