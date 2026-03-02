#include <iostream>

using namespace std;

int main (){
	int total = 0;
	int counter = 1;
	
	while (counter <= 10){
		int grade;
		cin >> grade;
		total += grade;
		counter++;
	}
	
	double average =
	static_cast<double>(total) / 10;
	cout << average;
}