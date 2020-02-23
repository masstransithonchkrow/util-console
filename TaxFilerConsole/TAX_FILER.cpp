/*This program facilitates the filing of
taxes based on what form you need.*/

#include<iostream>
#include<string>
#include "Form1040.cpp"
using namespace std;

//main portion of tax filing program that draws from the source of other files.
int TAX_FILER()
{
Form1040();

}

int main()
{
return TAX_FILER();
}
