# Guessing Game

A simple terminal-based number guessing game built in C. Players select a difficulty level, guess a number, and see if they can match the randomly generated number.

## Features
- Multiple difficulty levels:
  - **Level 1**: Guess a number between 0 and 5
  - **Level 2**: Guess a number between 0 and 10
  - **Level 3**: Guess a number between 0 and 50
  - **Level 4**: Guess a number between 0 and 100
- Random number generation for unpredictable gameplay.
- User feedback on whether the guess is correct or not.
- Option to replay the game.

## How to Play
1. Run the program.
2. Enter `0` to start the game.
3. Choose a difficulty level (1-4).
4. Guess the number within the range provided.
5. The program will tell you if your guess is correct or show the correct number.
6. Choose to play again or exit.

## How It Works
1. The game initializes random number generation using `srand(time(NULL))`.
2. The player selects a difficulty level, which sets the range of possible numbers.
3. A random number is generated within the selected range.
4. The player inputs their guess, and the program checks if it matches the generated number.
5. The game loops until the player chooses to stop.

## Usage
Compile the program:
```
gcc -o guessing_app Guess-app.c
```

Run the compiled program:
```bash
./guessing_game
```
Follow the on-screen instructions to play.

Enjoy the game and good luck with your guesses! 🎉

