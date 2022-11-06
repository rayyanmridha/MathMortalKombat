//Rayyan Mridha
//MMK
//11-5-22

#include "MMK.h"

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int characterChoice;
    char again;

    cout << "Welcome to Math Mortal Kombat!\nIn this game, you have to answer the math questions correctly to damage your opponent. If you're wrong, you take damage instead!" << endl;

    //Choose character
    cout << "\nTo start, select your charater:" << endl;

    do {
        cout << "Press 1 for Scorpian\nPress 2 for Subzero" << endl;
        do
        {
            cin >> characterChoice;
            if (characterChoice != 1 && characterChoice != 2)
            {
                cout << "Invalid choice. Please pick a character from 1 and 2." << endl;
            }
        } while (characterChoice != 1 && characterChoice != 2);

        if (characterChoice == 1)
        {
            Scorpian user;
            cout << "You have chosen: Scorpion" << endl;
            cout << "Health: " << user.health << endl;
            cout << "Attribute: " << user.attribute << endl;

            Subzero opponent;
            cout << "\nYou are versing: Subzero" << endl;
            cout << "Health: " << opponent.health << endl;
            cout << "Attribute: " << opponent.attribute << endl;

            //Match starts
            cout << "\n\nReady? Fight!" << endl;
            while (opponent.health > 0 && user.health > 0)
            {
                int move;
                //Ask for move
                cout << "\nPick a move (1 for small, 2 for heavy, 3 for special): ";
                do
                {
                    cin >> move;
                    if (move != 1 && move != 2 && move != 3)
                    {
                        cout << "Please enter a value between 1 and 3." << endl;
                    }
                } while (move != 1 && move != 2 && move != 3);

                int temp1;
                int temp2;
                int ans;
                //Small attack
                if (move == 1)
                {
                    temp1 = rand() % 300 + 50;
                    temp2 = rand() % 300 + 50;
                    cout << temp1 << " + " << temp2 << " = ";
                    cin >> ans;
                    if (ans != temp1 + temp2)
                    {
                        opponent.setSmall(temp1 + temp2);
                        cout << "Wrong! ";
                        opponent.smallAtk();
                        user.setHealth(user.health - opponent.getSmall());
                        cout << "You have " << user.health << " HP left." << endl;
                    }
                    else
                    {
                        user.setSmall(ans);
                        cout << "Correct! ";
                        user.smallAtk();
                        opponent.setHealth(opponent.health - ans);
                        cout << opponent.name << " has " << opponent.health << " HP left." << endl;
                    }
                }
                //Heavy attack
                else if (move == 2)
                {
                    temp1 = rand() % 500 + 100;
                    temp2 = rand() % 10 + 1;
                    cout << temp1 << " * " << temp2 << " = ";
                    cin >> ans;
                    if (ans != temp1 * temp2)
                    {
                        opponent.setHeavy(temp1 * temp2);
                        cout << "Wrong! ";
                        opponent.heavyAtk();
                        user.setHealth(user.health - opponent.getHeavy());
                        cout << "You have " << user.health << " HP left." << endl;
                    }
                    else
                    {
                        user.setHeavy(ans);
                        cout << "Correct! ";
                        user.heavyAtk();
                        opponent.setHealth(opponent.health - ans);
                        cout << opponent.name << " has " << opponent.health << " HP left." << endl;
                    }
                }
                else if (move == 3)
                {
                    temp1 = rand() % 70 + 30;
                    temp2 = rand() % 70 + 20;
                    cout << temp1 << " * " << temp2 << " = ";
                    cin >> ans;
                    if (ans != temp1 * temp2)
                    {
                        opponent.setSpecial(temp1 * temp2);
                        cout << "Wrong! ";
                        opponent.specialAtk();
                        user.setHealth(user.health - opponent.getSpecial());
                        cout << "You have " << user.health << " HP left." << endl;
                    }
                    else
                    {
                        user.setSpecial(ans);
                        cout << "Correct! ";
                        user.specialAtk();
                        opponent.setHealth(opponent.health - ans);
                        cout << opponent.name << " has " << opponent.health << " HP left." << endl;
                    }
                }
            }
            //Results
            if (opponent.health <= 0 && user.health > 0)
            {
                cout << "\nCongratulations! You have won the game with " << user.health << " HP remaining." << endl;
            }
            else if (user.health <= 0 && opponent.health > 0)
            {
                cout << "\nGame over! " << opponent.name << " has won with " << opponent.health << " HP remaining." << endl;
            }
        }
        else if (characterChoice == 2)
        {
            Subzero user;
            cout << "You have chosen: Subzero" << endl;
            cout << "Health: " << user.health << endl;
            cout << "Attribute: " << user.attribute << endl;

            Scorpian opponent;
            cout << "\nYou are versing: Scorpian" << endl;
            cout << "Health: " << opponent.health << endl;
            cout << "Attribute: " << opponent.attribute << endl;

            //Match starts
            cout << "\n\nReady? Fight!" << endl;
            while (opponent.health > 0 && user.health > 0)
            {
                int move;
                //Ask for move
                cout << "\nPick a move (1 for small, 2 for heavy, 3 for special): ";
                do
                {
                    cin >> move;
                    if (move != 1 && move != 2 && move != 3)
                    {
                        cout << "Please enter a value between 1 and 3." << endl;
                    }
                } while (move != 1 && move != 2 && move != 3);

                int temp1;
                int temp2;
                int ans;
                //Small attack
                if (move == 1)
                {
                    temp1 = rand() % 300 + 50;
                    temp2 = rand() % 300 + 50;
                    cout << temp1 << " + " << temp2 << " = ";
                    cin >> ans;
                    if (ans != temp1 + temp2)
                    {
                        opponent.setSmall(temp1 + temp2);
                        cout << "Wrong! ";
                        opponent.smallAtk();
                        user.setHealth(user.health - opponent.getSmall());
                        cout << "You have " << user.health << " HP left." << endl;
                    }
                    else
                    {
                        user.setSmall(ans);
                        cout << "Correct! ";
                        user.smallAtk();
                        opponent.setHealth(opponent.health - ans);
                        cout << opponent.name << " has " << opponent.health << " HP left." << endl;
                    }
                }
                //Heavy attack
                else if (move == 2)
                {
                    temp1 = rand() % 500 + 100;
                    temp2 = rand() % 10 + 1;
                    cout << temp1 << " * " << temp2 << " = ";
                    cin >> ans;
                    if (ans != temp1 * temp2)
                    {
                        opponent.setHeavy(temp1 * temp2);
                        cout << "Wrong! ";
                        opponent.heavyAtk();
                        user.setHealth(user.health - opponent.getHeavy());
                        cout << "You have " << user.health << " HP left." << endl;
                    }
                    else
                    {
                        user.setHeavy(ans);
                        cout << "Correct! ";
                        user.heavyAtk();
                        opponent.setHealth(opponent.health - ans);
                        cout << opponent.name << " has " << opponent.health << " HP left." << endl;
                    }
                }
                else if (move == 3)
                {
                    temp1 = rand() % 70 + 30;
                    temp2 = rand() % 70 + 20;
                    cout << temp1 << " * " << temp2 << " = ";
                    cin >> ans;
                    if (ans != temp1 * temp2)
                    {
                        opponent.setSpecial(temp1 * temp2);
                        cout << "Wrong! ";
                        opponent.specialAtk();
                        user.setHealth(user.health - opponent.getSpecial());
                        cout << "You have " << user.health << " HP left." << endl;
                    }
                    else
                    {
                        user.setSpecial(ans);
                        cout << "Correct! ";
                        user.specialAtk();
                        opponent.setHealth(opponent.health - ans);
                        cout << opponent.name << " has " << opponent.health << " HP left." << endl;
                    }
                }
            }
            //Results
            if (opponent.health <= 0 && user.health > 0)
            {
                cout << "\nCongratulations! You have won the game with " << user.health << " HP remaining." << endl;
            }
            else if (user.health <= 0 && opponent.health > 0)
            {
                cout << "\nGame over! " << opponent.name << " has won with " << opponent.health << " HP remaining." << endl;
            }
        }
        cout << "Do you want to play again? (press y for yes)" << endl;
        cin >> again;
    } while (again == 'y');
}