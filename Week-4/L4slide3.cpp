#include <iostream>

using namespace std;

int main () {
	int total = 0, counter = 0, grade;
	
	cout << "Enter grade or -1 to quit: ";
	cin >> grade;
	
	while (grade != -1){
		total += grade;
		counter++;
		
		cout << "enter next grade or -1 to quit: ";
		cin >> grade;
		
	}
	
	if (counter != 0) {
		double average = static_cast<double>(total) / counter;
		cout << "Class average is " << average;

	}else {
		cout << "no grades were entered.";
	}
}