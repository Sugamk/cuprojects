#include <bits/stdc++>
#include<iostream>
using namespace std;

void menu()
{
	cout << "Press 1 to calculate Sum of Numbers\n";
	cout << "Press 2 to calculate Difference of Numbers\n";
	cout << "Press 3 to calculate Product of numbers\n";
	cout << "Press 4 to calculate Division of numbers\n";
	cout << "Press 5 to exit\n";
}
void result(int choice, int a, int b)
{
	switch (choice) {
	case 1: {
		cout << "Sum is " << (a + b) << "\n";
		break;
	}
	case 2: {
		cout << "Difference is " << (a - b) << "\n";
		break;
	}
	case 3: {
		cout << "Product is " << (a * b) << "\n";
		break;
	}
	case 4: {
		cout << "Division is " << (a / b) << "\n";
		break;
	}

	case 5: {
		cout << "Thank you\n";
		break;
	}
	default:
		printf("Wrong Input\n");
	}
}
int main()
{
	int a = 5, b = 7;
	int choice, res;
	menu();
	cout << "Enter your choice:\n";
	choice = 1;
	cout << "Choice is " << choice << endl;
	result(choice, a, b);
	return 0;
}
