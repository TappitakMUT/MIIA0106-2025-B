#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int secretNumber = rand() % 100 + 1;
	int guess;	
	int attempts = 0;
	const int MAX_ATTEMPTS = 10;

	cout << "=== Guess What Number it is ? (1-100) === \n";
	cout <<"Rules: you only have one chance to guess." << MAX_ATTEMPTS << " Round **\n";
	do {
		cout << "Guess your number: \n";
		cin >> guess;

		if (guess < 1 || guess > 100) {
		cout << ">> Incorrect! Please enter numbers between 1 and 100 only. <<\n";
		continue;
		}
		attempts++;
		}
		if (guess == secretNumber) {
			cout << "That's correct! The secret number is..." << secretNumber << "\n";
			cout << "You guessed them all."<< attempts << " round(s).\n";
		break;
		}
		if (attempts >= MAX_ATTEMPTS) {
			cout <<">> Game Over! You've used all your attempts. the secret number was " << serretNumber << "\n";
		break;
		}
		if (guess < secretNumber) {
			cout << ">> Too low! Try again. <<\n";
		}
		else {
			cout <<">> Too high! Try again. <<\n";
		}
		} while (true);
		cout << "=== end game === \n";
		
	return 1;
}