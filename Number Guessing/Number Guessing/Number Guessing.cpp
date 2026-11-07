#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    while (true)
    {
        // Get a different random number each time the program runs
        srand(time(0));

        // Generate a random number between 0 and 100
        int randomNum = rand() % 2;

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

            cout << "Please enter 1,2 or 3: " << endl;

        }
    exit_loop:;

        cout << "Choose a random number between 1 and 100: ";

        while (guess != randomNum)
        {
            cin >> guess;

            if (guess == randomNum)
            {
                break;
            }

            if (attempts >= attemptsMax)
            {
                break;
            }

            attempts++;
            cout << "Try Again: ";

        }

        if (guess == randomNum)
        {
            cout << "Congratulations you guessed it \n";
        }
        else
        {
            cout << "Better luck next time \n";
        }

        cout << "Would you like to play again? Y/N:";

        while (true)
        {
            cin >> choice;

            if (choice == "Y" || choice == "y")
            {
                "\n";
                break;
            }
            else if (choice == "N" || choice == "n")
            {
                "Goodbye";
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
