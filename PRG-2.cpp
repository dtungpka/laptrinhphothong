#include <iostream>
using namespace std;
#ifdef PRG2
//Giống PRG-1 nhưng thêm hàm khởi tạo cho lớp DivByZero và hàm what
class DivByZero {
public:
	DivByZero() {
		cout << "Khong the chia cho 0" << endl;
	}
	const char* what() {
		return "Khong the chia cho 0";
	}
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