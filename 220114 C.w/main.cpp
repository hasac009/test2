#include "Header.h"

int main()
{
	
	Phone ph1;
	Phone ph2("380959304697", " A52", 380);
	Phone ph3("380503228456", "Lenovo 16");

	int size = 2;
	string* numbers = new string[size];
	numbers[0] = "+380954657328";
	numbers[1] = "+380506229475";

	ph1.show();
	cout << endl;
	ph2.show();
	cout << endl;
	ph3.show();
	cout << endl;

	ph1.receiveCall("Martin Blue");
	cout << endl;
	ph2.receiveCall("Jay Big Bob", "+84324838949");
	cout << endl;
	ph3.sendMessage(numbers, size);
}