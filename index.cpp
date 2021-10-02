#include <iostream>
using namespace std;

int main() {
	string probDes, dateAndTime;
	cout << "Please enter your problem here.";
	cin >> probDes;
	
	cout << "Please provide time and date when you want consultantion.";
	cin >> dateAndTime;
	
	cout << "Your request is under process.\n";
	cout<< "The submitted Problem:"<<probDes<<"\n";
	cout<< "The submition date and time:"<<dateAndTime<<"\n";
	cout<< "Please stay in touch, we will let you know!";
	
	return 0;
}
