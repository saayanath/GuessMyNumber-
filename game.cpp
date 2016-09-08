#include <iostream>

using namespace std; 

extern int number; 
extern int guess; 
extern int guesses = 0; 


int main() 
{ srand(number > 0); //grabs set of numbers greater than 0 
 number  = rand()%100; //randomly generates number between 0 and 99
 cout << "Please guess a number between 0 and 99" << endl; 
 cin>> guess; //sets user input to "guess" variable 
 guessing_game(guess);
 return 0; 
 }
 
 int guessing_game(&guess) {  //guessing function
 
 if(guesses <= 10) {
      if(guess > 99 || guess < 0) { 
      cout << "Invalid guess. Please guess a new number." << endl;
      cin>> guess;
      guessing_game(guess);}
 else{ 
      if(guess >number) {
          cout << "The number you guessed is too high. Please try again with a lower value." << endl;
          cin >> guess;
          guesses++;
          guessing_game(guess);} 
      if (guess < number) {
          cout << "The number you guessed is too low. Please try again with a higher value." << endl; 
          cin >> guess; 
          guesses++;
          guessing_game(guess);} 
      if(guess == number) { 
        cout << "Congratulations! You guessed the right number in " << guesses << " tries. << endl; 
          }
        }
  else { cout << "You have used all 10 guesses. The correct number was " << number << ". Please try again." << endl; 
  
  } 

