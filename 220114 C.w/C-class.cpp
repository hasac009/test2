#include <string>
using namespace std;
class Phone
{
private:
	string number;
	string model;
	int weight;
public:
	Phone();
	Phone(string num, string mod);
	Phone(string num, string mod, int w);

	void show();
	string getNumber();
	void receiveCall(string callerName);
	void receiveCall(string callerName, string num);
	void sendMessage(string* numbers, int size);
};