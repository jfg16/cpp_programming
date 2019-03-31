/* Name: (Jonathan Garcia)
Date: (1/31/19)
Section: (3)
Assignment: (Homework 2)
Due Date: (1/31/19)
About this project: (A grade calculator for COP3363, calculating tests, recitat$
Assumptions: (User will input valid homework, recitation and test grades)

All work below was performed by (Jonathan Garcia) */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        double hwfinal, recfinal, hwAve, testAve, courAve;
        char letter;
        cout << "\n";
        cout << "Welcome to Grade Calculator! \n\n";

        //HOMEWORK GRADES
        cout << "Homework Grades -> \n";
        double hw1;
        cout << "Homework 1: ";
        cin >> hw1;
        double hw2;
        cout << "Homework 2: ";
        cin >> hw2;
        double hw3;
        cout << "Homework 3: ";
        cin >> hw3;
        double hw4;
        cout << "Homework 4: ";
        cin >> hw4;
        double hw5;
        cout << "Homework 5: ";
        cin >> hw5;
        double hw6;
        cin >> hw6;
        double hw7;
        cout << "Homework 7: ";
        cin >> hw7;
        cout << "\n";

        //RECITATION GRADES
        cout << "Recitation Grades --> \n";
        double rec1;
        cout << "Recitation 1: ";
        cin >> rec1;
        double rec2;
        cout << "Recitation 2: ";
        cin >> rec2;
        double rec3;
        cout << "Recitation 3: ";
        cin >> rec3;
        double rec4;
        cout << "Recitation 4: ";
        cin >> rec4;
        double rec5;
        cout << "Recitation 5: ";
        cin >> rec5;
        double rec6;
        cout << "Recitation 6: ";
        cin >> rec6;
        cout << "\n";

        //TEST GRADES
        cout << "Test Grades --> \n";
        double test1;
        cout << "Midterm I: ";
        cin >> test1;
        double test2;
        cout << "Midterm II: ";
        cin >> test2;
        double final;
        cout << "Final: ";
        cin >> final;
        cout << "\n";

        //EXTRA CREDIT GRADE
        char yn;
        double ec;
        cout << "Is there any extra credit to add in? (Y or N) --> ";
        cin >> yn;
        yn=tolower(yn);

                if(yn == 'y')
                {
                        cout << "How many extra points should be added? --> ";
                        cin >> ec;
                }else if(yn == 'n') {

                }else {
                        cout << "\nInvalid option, exiting program.\n\n";
                        goto out;
                }//end of EC

        cout << "\n";
        std::cout << std::fixed; //decimal point precision

        //HW Sum
        hwfinal = hw1+hw2+hw3+hw4+hw5+hw6+hw7;
        //Recitation Grade
        recfinal = rec1+rec2+rec3+rec4+rec5+rec6;
        //HW Grade w/ EC & Recitations
        hwAve = ((hwfinal+recfinal+ec)/820)*100;
        cout << "Homework Average: " << hwAve << setprecision(2) << "% \n";
        
        //Test Average
        testAve = ((test1*17.5)+(test2*17.5)+(final*25))/60;
        cout << "Test Average: " << testAve << setprecision(2) << "% ";
        if(testAve < 69) {
                cout << "(!!Test average requirement not met, final course  grade may differ!!)";
        }
        cout << "\n";

        courAve = ((test1*0.175)+(test2*0.175)+(final*0.25)+(hwAve*0.40));
        cout << "Course Average: " << courAve << setprecision(2) << "% \n";

        //Letter Grade
        if(courAve >= 90) {
                letter = 'A';
        }else if(courAve >= 80) {
                letter = 'B';
        }else if(courAve >= 69) {
                letter = 'C';
        }else if(courAve >= 60) {
                letter = 'D';
        }else {
                letter = 'F';
        }//end of letter grade

        cout << "Course Grade: " << letter << "\n";
        cout << "\n\n";

        out: //if EC input is wrong
        return 0;

}//main closing