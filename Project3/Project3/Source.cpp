/*
Jackson Campbell - 9/26/17 1st period
User questions assignment
making a program that can take in data and answer questions
*/
// Libraries
#include <iostream>
#include <conio.h>
//namespaces
using namespace std;
// functions()
void pause() {
	cout << "press any key to continue...";
	while (_kbhit());
	_getch();
	cout << "\n";
}
// main
void main() {
	//define and assign variables
	int cupcakes;
	cout << "how many cupcakes do you want to make? ";
	cin >> cupcakes;
	cout << "you want to make " << cupcakes << " cupcakes, so you start making them. ";
	float fruit;
	cout << "how much fruit do you want to use for your smoothie? ";
	cin >> fruit;
	cout << "you want to use " << fruit << " fruits for your smoothie. ";
	bool sugar = false;
	char cup;
	cout << "do you have enough sugar for your cake? ";
	cin >> cup;
	if (cup == 'y')
		sugar = true;
	cout << "you have enough sugar so you start making your cake. "; 
	bool eggs = false;
	char yes;
	cout << "do you have enough eggs to make ice cream? ";
	cin >> yes;
	if (yes == 'y')
		eggs = true;
	cout << "you have enough eggs, so now you can make your ice cream. ";
	pause();

}