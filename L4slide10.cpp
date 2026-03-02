#include <iostream>

using namespace std;

int main () {
	int age;
	cout << "enter age (1-120): ";
	cin >> age;
	
	while (age < 1 || age > 120){
		cout << "invalid. Please enter a realistic age:" ;
		cin >> age;
	}
	
	cout <<" valid age. Age: " << age;
	
	return 0;
}