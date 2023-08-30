#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	srand(time(nullptr));
	int range = rand() % 100 + 1;
	bool ourguess = false;
	
	
	int guess;
	cout << "Try gussing the number between 1 - 100" << endl;
	cin >> guess;
	int tries = 0;

	while (!ourguess)
	{
		if (guess < 1 || guess>100) {
			cout << "OUT OF RANGE" << endl;
			cin >> guess;

		


	}
	while (guess <= 100) {
		tries++;
		
		if (guess == range) {
			cout << "Congo you guessed the number in :" << tries <<" tries"<< endl;
		}//if end
		
		else if ( guess > range) {
			cout << "Try a lower numeber" << endl;
		}//elif end
		else if (guess < range) {
			cout << "Try a higher number" << endl;

		}
		
		cin >> guess;
	}

	}
	
	

	



	







	return 0;

}