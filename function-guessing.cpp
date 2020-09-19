#include <iostream>
#include <time.h>
using namespace std;

int main() 
{
	srand(time(0));
	int random = rand() % 10 + 1;
	int round = Guess(random);
	cout << "The secret number is " << random << endl;
	cout << "You made " << round << " guesses" << endl;
}
int Guess(int ran) 
{
	int round = 1;
	bool check = false;
	int num;
	while (check == false) {
		cout << "Guess the number(1 to 10) : ";
		cin >> num;
		if (num < ran) {
			cout << "The secret number is higher " << endl;
			round++;
		}
		else if (num > ran) {
			cout << "The secret number is lower " << endl;
			round++;
		}
		else {
			cout << "Congratulations!" << endl;
			check = true;
		}
	}
	
	return round;
}