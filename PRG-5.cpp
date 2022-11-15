#define PRG5
#ifdef PRG5
#include <iostream>
#include <string>
using namespace std;

int main() {

	try
	{

		string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		int index;
		cout << "Enter an index: ";
		cin >> index;
		cout << endl;
		cout << "The character at index " << index << " is " << s.at(index) << endl;
	
	}
	catch (out_of_range)
	{
		cout << "Index out of range" << endl;
	}
	return 0;
	
}
#endif