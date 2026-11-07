#include <iostream>
#include <cstdlib>
#include <limits>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    // Get a different random number each time the program runs
    srand(time(0));

    while (true)
    {

        // Generate a random number between 0 and 100
        int randomNum = rand() % 101;

        int attemptsMax = 0;

        int attempts = 0;

        int diff = 0;

        int guess = 0;

        string choice = "";

        cout << ("Hello this is a number guessing game, select how many goes you woud like: \n"
            "1. Easy (10 Tries) \n"
            "2. Medium (5 tries) \n"
            "3. Hard (1 Try) \n");

        while (true)
        {
            cin >> diff;

            switch (diff)
            {
            case 1:
                attemptsMax = 10;
                goto exit_loop;
            case 2:
                attemptsMax = 5;
                goto exit_loop;
            case 3:
                attemptsMax = 1;
                goto exit_loop;

            }

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Please enter 1,2 or 3: " << endl;

        }
    exit_loop:;

        cout << "Choose a random number between 1 and 100: ";

        while (guess != randomNum)
        {
            if (!(cin >> guess) || guess < 1 || guess > 100)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Please enter a number between 1 and 100: ";
                continue;
            }
            attempts++;

            if (guess == randomNum)
            {
                break;
            }

            if (attempts >= attemptsMax)
            {
                break;
            }

            if (guess < randomNum)
            {
                cout << "Too low, try again: ";
            }
            else if (guess > randomNum)
            {
                cout << "Too high, try again: ";
            }

            

            
        }

        if (guess == randomNum)
        {
            cout << "Congratulations you guessed it \n";
        }
        else
        {
            cout << "Better luck next time, the number was " << randomNum << "\n";
        }

        cout << "Would you like to play again? Y/N:";

        while (true)
        {
            cin >> choice;

            if (choice == "Y" || choice == "y")
            {
                cout << "\n";
                break;
            }
            else if (choice == "N" || choice == "n")
            {
                cout << "Goodbye";
                exit(0);
            }
            else
            {
                cout << "Please enter a Y/N ";
                continue;
            }
        }
    };
    return 0;

}
