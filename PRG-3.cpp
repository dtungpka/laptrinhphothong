
#include <iostream>
using namespace std;
#ifdef PRG3
//Giống PRG-2 nhưng thừa kế lớp invaid_argument
class DivByZero : public invalid_argument {

public:
	DivByZero() : invalid_argument("Khong the chia cho 0") { cout << "Khong the chia cho 0" << endl; }
};
int main()
{
	int dividend, divisor, quotient;
	try
	{
		cout << "Line 3: Enter the dividend: ";
		cin >> dividend;
		cout << endl;
		cout << "Line 6: Enter the divisor: ";
		cin >> divisor;
		cout << endl;

		if (divisor == 0)
			throw DivByZero();
		quotient = dividend / divisor;
		cout << "Line 12: Quotient = " << quotient
			<< endl;
	}
	catch (DivByZero)
	{
		cout << "Line 14: Division by 0." << endl;
	}
	return 0;
}
#endif