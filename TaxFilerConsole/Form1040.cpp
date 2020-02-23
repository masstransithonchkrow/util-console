/*This is the CPP source file
for Form 1040, The Individual
Income Tax Return.*/

/*"Taxing people more than is absolutely
necessary is legalized robbery."
-(John) Calvin Coolidge, #POTUS30, 1923-1929*/

//dependent programs like this cannot have a main. It will short circuit the build.
#include<iostream>
#include<string>
using namespace std;

//this simulates the calculations for Form 1040.
int Form1040()
{
    const int SINGLE_FILE = 1; const int FILING_JOINTLY = 2; const int FILING_SEPARATELY = 3; const int HEAD_OF_HOUSE = 4;
    const int WIDOWER = 5;
    int filingStatus; //the tax filer's filing status.

    cout << "Form 1040 - US Individual Income Tax Return\nRevised in 2020 by The Mass Transit Honchkrow" << endl;
    cout << "\n"; //newline character
    cout << "What is your filing status?\n1 - Single\n2 - Married Filing Jointly\n3 - Married Filing Separately\n4 - Head of Household\n5 - Qualifying Widower\n";
    cout << "\n Enter your answer:"; //newline character
    cin >> filingStatus;

    if (filingStatus == SINGLE_FILE)
    {
        char dependents; //holds answer to whether or not you have dependents.
        cout << "You're filing as an individual.\n";
        cout << "Do you have dependents? (Y/N)\n";
        cin >> dependents;
        if (dependents == 'y' || dependents == 'Y')
        {
            int numDependents; //holds how many dependents you have if you answered yes. Cannot be zero.
            cout << "So you have dependents. How many?\n";
            cin >> numDependents;
            if (numDependents == 0)
            {
            cout << "But you just said you had dependents.";
            }
            else
            {
            cout << "You have " << numDependents << " dependents.\n";
            }
        }
        else
        {
            cout << "You do not have dependents.\n";
        }

        cout << "At this point, please pull out your W2 form and enter the following values:\n";

        double line1; //wages, salries, tips. Attach W2 form.
        cout << "What are your wages, salaries and tips?\n";
        cin >> line1;
        double line2a; //tax exempt interest
        cout << "What is the amount of tax exempt interest?\n";
        cin >> line2a;
        double line2b; //taxable interest. You might need to attach Schedule B.
        cout << "What is the amount of your taxable interest?\n";
        cin >> line2b;
        double line3a; //qualified dividends
        cout << "What is the amount of your qualified dividends?\n";
        cin >> line3a;
        double line3b; //ordinary dividends. You might need to attach Schedule B.
        cout << "What is the amount of your ordinary dividends?\n";
        cin >> line3b;
        double line4a; //Individual Retirement Account (IRA) distributions
        cout << "What is the value of your IRA distributions for this year?\n";
        cin >> line4a;
        double line4b; //taxable amount of IRA distributions
        cout << "What's the taxable amount of IRA distributions?\n";
        cin >> line4b;
        double line4c; //pensions and annuities
        cout << "How much was contributed in pensions in annuities?\n";
        cin >> line4c;
        double line4d; //taxable amount of pensions and annuities
        cout << "How much of your pensions and annuities are considered taxable?\n";
        cin >> line4d;
        double line5a; //social security benefits
        cout << "How much was contrinuted toward Social Security benefits?\n";
        cin >> line5a;
        double line5b; //taxable amount of social security benefits
        cout << "How much of your Social Security benefits were taxable?\n";
        cin >> line5b;
        double line6; //capital gain or loss. Attach Schedule D if required.
        cout << "What are your capital gains or losses? \nLosses should be entered as a negative value.\n";
        cin >> line6;
        char scheduleD; //holds answer to whether or not Schedule D is required.
        cout << "Is Schedule D required for the capital gains and losses you must report?(Y/N)\n";
        cin >> scheduleD;
            if (scheduleD == 'y' || scheduleD == 'Y')
            cout << "You will need to check the box to the right of line 6.\n";
            else
            cout << "You do not need to check the box next to line 6.\n";
        double line7a; //other income from Schedule 1, Line 9
        double line7b = line1 + line2b + line3b + line4b + line4d + line5b + line6 + line7a;
        printf("\nYour total income is $%.2f", line7b);

    }
    else if (filingStatus == FILING_JOINTLY)
    {
        cout << "You're filing as a couple.";
    }
    else if (filingStatus == FILING_SEPARATELY)
    {
        cout << "You're married, but would rather file separately.";
    }
    else if (filingStatus == HEAD_OF_HOUSE)
    {
        cout << "You're filing as the head of household.";
    }
    else if (filingStatus == WIDOWER)
    {
        cout << "You're filing as a qualified widower.";
    }

}
