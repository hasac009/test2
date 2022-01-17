#include "Header.h"

void Phone::show()
{
	cout << "Number: +" << number << "\nModel: " << model << "\nWeight: " << weight << endl;
}
void Phone::receiveCall(string callerName)
{
	cout << callerName << " is calling you.\n";
}
void Phone::receiveCall(string callerName, string num)
{
	cout << callerName << " with number +" << num << " is calling you.\n";
}
string Phone::getNumber()
{
	return number;
}
void Phone::sendMessage(string* numbers1, int size1)
{
	string new_str{};
	cout << "Input number: ";
	cin >> new_str;
	cout << endl;
	size1++;
	string* new_numbers = new string[size1];
	for (int i = 0; i < size1 - 1; i++)
	{
		new_numbers[i] = numbers1[i];
		cout << new_numbers[i] << endl;
	}
	new_numbers[size1 - 1] = new_str;
	cout << new_numbers[size1 - 1];

	numbers1 = new_numbers;
	delete[] new_numbers;
}