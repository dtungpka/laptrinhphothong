#include <iostream>
using namespace std;
//Tạo lớp DivByZero để xử lý ngoại lệ, khối lệnh này sẽ được thực thi khi có lỗi chia cho 0
//Khối này có thể rỗng
class DivByZero {};
#if PRG1
int main()
{
	int dividend, divisor, quotient; 
	//Khối lệnh try để xử lý ngoại lệ
	try 
	{
		//Nhập vào số chia và số bị chia
		cout << "Line 3: Enter the dividend: "; 
		cin >> dividend; 
		cout << endl; 
		cout << "Line 6: Enter the divisor: "; 
		cin >> divisor; 
		cout << endl; 
		//Kiểm tra số bị chia có bằng 0 hay không và ném ngoại lệ
		if (divisor == 0) 
			throw DivByZero();
		quotient = dividend / divisor; 
		cout << "Line 12: Quotient = " << quotient
			<< endl; 
	}
	// Xử lý ngoại lệ DivByZero
	catch (DivByZero)
	{
		cout << "Line 14: Division by 0." << endl; 
}
return 0;
}
#endif