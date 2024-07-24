#include <iostream>
#include <stdlib.h>
#include <time.h>


/*
Description:

The guessing project in C++ is a game designed to test the player’s luck and knowledge. 
The player needs to guess a random number generated by the computer. 
If the player guesses right, they will win a certain amount of money. 
The winning prize depends on the difficulty of the game. 
The program implements classes, functions, and user-defined data types. 
It also uses other features such as loops and conditionals to create a logical structure. 
Furthermore, it makes use of the standard template library to 
implement basic operations and other data structures.

*/


class Game{
    private:
        int gameDifficulty = 1; // from 1-3 (Easy, Medium, Hard).
        int range;
        int prize = 1; // Default prize to give to user (constant)
        int score = 0; // User Score

        int getRandomNumber(); // Get random Number depending on difficulty
        void givePrize();  // Give Prize to User

        void losingMessage(); // Print User Losing Message
        void earningMessage(); // Print User Winning Message

        void updateScore(); // Increment user score

        bool keepRunning;  // Variable to keep running game or not
    
    public:

        Game(); // Create Game setting it's difficulty.

        int getScore();
        int getDifficulty();
        int runGame();
    
};