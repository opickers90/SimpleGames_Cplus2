#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    string name;

    cout << "Enter your name please:" << endl;
    cin >> name;
    cout << "Hi " << name << " !!" << endl;
    cout << "This is a very simple game" << endl;
    cout << "You will be given a 10 number of the range 0-6." << endl;
    cout << "The objective of the game is to guess whether the next number is going to be higher or not." << endl << endl;
    cout << "You are starting with number 3. Is the next number higher(write H) or lower(write L) ?" << endl;



    int number = 1;
    int mistakes = 0;
    int correctGuesses = 0;
    int prevNum = 3, nextNum;
    char choice;

    do
    {
        srand ( time(NULL) );
        do
            nextNum = rand() % 7;

        while (nextNum == prevNum);

        cin >> choice;

        if (choice == 'H')
        {
            if (prevNum < nextNum)
            {
                cout << "Correct ! The new number is " << nextNum << endl;
                correctGuesses = correctGuesses + 1;
                //cout << "You already have correct guess: " << correctGuesses << endl;
            }
            else if (prevNum > nextNum)
            {
                cout << "Wrong, you made a mistake ! The new number is " << nextNum << endl;
                mistakes = mistakes + 1;
                //cout << "You already have mistake guess: " << mistakes << endl;
            }
        }

        if (choice == 'L')
        {
            if (prevNum > nextNum)
            {
                cout << "Correct ! The new number is " << nextNum << endl;
                correctGuesses = correctGuesses + 1;
                //cout << "You already have correct guess: " << correctGuesses << endl;
            }
            else if (prevNum < nextNum)
            {
                cout << "Wrong, you made a mistake ! The new number is " << nextNum << endl;
                mistakes = mistakes + 1;
                //cout << "You already have mistake guess: " << mistakes << endl;
            }
        }


        if (choice != 'H' && choice != 'L')
        {
                cout << "You press wrong Button" << endl;
                cout << "Just press L for Low or H for High" << endl;
                number = number - 1;
        }

        prevNum = nextNum;
        number = number + 1;
    }
    while(number < 11);

    if (correctGuesses == 10)
    {
        cout << "Congratulation, YOU WIN !!, you can more than 6 numbers from 6 numbers" << endl;

    }

    else
    {
    cout << "Congratulation " << name << " !!" << endl;
    cout << name <<" ,You've made "<< mistakes << " mistakes! Game is now over !" << endl;
    cout << name <<" ,You had " << correctGuesses << " correct guesses before the game was over" << endl;
    cout << "Thanks for test this game" << endl << endl;
    }
    return 0;
};
