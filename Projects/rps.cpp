/* Name: Jonathan Garcia
Date: 3/1/19
Section: 3
Assignment: Homework 4
Due Date: 3/1/19
About this project: To play rock, paper, scissors with a computer using random number generator & pass by reference.
Assumptions: User will input correct choices

All work below was performed by (Jonathan Garcia) */

//PreProcessor Directives
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//Function DECLARATIONs
void playRPS(char choi, char &result);
void GameResults(int total, int w, int l, int t);

//MAIN function
int main()
{
    char choi, result='\0';
    int count = 0, ties = 0, win = 0, loss = 0;
    srand(0);

    //welcome user
    cout << "\nWelcome to COP3363 ROCK PAPER SCISSORS!\n";

    //Prompt user
    cout << "Please select:\n";
    cout << "Rock(r), Paper(p), or Scissors(s) ?\nOr enter q to quit--> ";
    cin >> choi;
    choi = toupper(choi);

    //Check for input error
    while (choi != 'R'&&choi != 'S'&&choi != 'P'&&choi != 'Q'){
       cout << "Please enter r, p, or s\n\n";
       cout << "Please select:\n";
       cout << "Rock(r), Paper(p), or Scissors(s) ?\nOr enter q to quit--> ";
       cin >> choi;
       choi = toupper(choi);
    }
   
   //main function
    do{
        playRPS(choi, result);
        
        if (result == 'W') {
            win++;
            count++;
        } else if (result == 'L') {
            loss++;
            count++;
        } else {
            ties++;
            count++;
        }
        cout << endl;

        cout << "Please select:\n";
        cout << "Rock(r), Paper(p), or Scissors(s)?\n";
        cout << "Or enter q to quit --> ";
        cin >> choi;
        choi = toupper(choi);

    } while(choi != 'Q');

    //Getting results
    GameResults(count, win, loss, ties);
    return 0;
}

void GameResults(int total, int w, int l, int t)
{
    double tPer = (double(t) / total), wPer = (double(w) / total), lPer = (double(l) / total);
    
    cout << "          Totals          Percentage\n";
    cout << "-------------------------------------\n";
    cout << fixed << setprecision(2) << "Wins       " << w << "            " << wPer <<"%"<<endl;
    cout << fixed << setprecision(2) << "Losses     " << l << "            " << lPer <<"%"<< endl;
    cout << fixed << setprecision(2) << "Ties       " << t << "            " << tPer <<"%"<< endl;
    cout << "-------------------------------------\n";
    cout << "Total games played :     " << total << endl << endl;
    
    if (wPer > lPer && wPer > tPer) {
        cout << "You played great!\n";
        cout << "Thanks for playing!\n";
    } else {
        cout << "Meh...!\n";
        cout << "Thanks for playing!\n";
   }
}

void playRPS(char choi, char &result)
{
    char comp;

    //computer choice (random)
    int ch = rand() % 3 + 1;
    if (ch == 1) {
        comp = 'R';
    } else if (ch == 2) {
        comp = 'P';
    } else {
        comp = 'S';
    }
   
    if (comp =='R' && ch =='R') {
       result = 't';
    } else if (comp == 'R' && ch == 'S') {
       result = 'l';
    } else if (comp == 'P' && ch == 'P') {
       result = 't';
    } else if (comp == 'P' && ch == 'R') {
       result = 'l';
    } else if (comp == 'S' && ch == 'S') {
       result = 't';
    } else if (comp == 'S' && ch == 'P') {
       result = 'l';
    } else {
       result = 'w';
    }
   
    //Computer Choice
    cout << "The computer chose... ";
   
    if (comp == 'R') {
       cout << "ROCK!" << endl;
    } else if (comp == 'P') {
       cout << "PAPER!" << endl;
    } else {
       cout << "SCISSOR!" << endl;
    }
   
    //USER Choice
    cout << "You chose ";

    if (choi == 'R') {
       cout << "ROCK!" << endl;
    } else if (choi == 'P') {
       cout << "PAPER!" << endl;
    } else {
       cout << "SCISSOR!" << endl;
    }
    
    //USER Result
    cout << "YOU ";
   
    if (result == 'w'){
       cout << "WIN!" << endl;
    } else if (result == 'l') {
       cout << "LOSS!" << endl;
    } else {
       cout << "TIED!" << endl;
    }
}