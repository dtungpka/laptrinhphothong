#ifdef PRG4
#include <iostream>
using namespace std;
// Tạo namespace TimeExceptions để dễ quản lý các lớp ngoại lệ
namespace TimeExceptions {
	// Tạo lớp ngoại lệ InvalidHour
	class HExcept : public out_of_range {
	public:
		HExcept() : out_of_range("Invalid hour") {}
	};
	// Tạo lớp ngoại lệ InvalidMinute
	class MExcept : public out_of_range {
	public:
		MExcept() : out_of_range("Invalid minute") {}
	};
	// Tạo lớp ngoại lệ InvalidSecond
	class SExcept : public out_of_range {
	public:
		SExcept() : out_of_range("Invalid second") {}
	};
}
//Tạo lớp Duration để tính khoảng thời gian
class Duration
{
private:
	int hour;
	int minute;
	int second;
public:
	// Hàm khởi tạo
	Duration(int h, int m, int s) {
		hour = h;
		minute = m;
		second = s;
	}
	// Hàm chuyển đổi giờ, phút, giây sang giây
	int toSeconds() {
		//Nếu giờ, phút, giây không hợp lệ thì ném ngoại lệ
		if (hour < 0 || hour > 23)
			throw TimeExceptions::HExcept();

		if (minute < 0 || minute > 59)
			throw TimeExceptions::MExcept();

		if (second < 0 || second > 59)
			throw TimeExceptions::SExcept();
		//Nếu hợp lệ thì trả về giây
		return hour * 3600 + minute * 60 + second;
	}

};

int main() {

	
	try
	{
		//get input
		int h, m, s;
		cout << "Enter hour: ";
		cin >> h;
		cout << "Enter minute: ";
		cin >> m;
		cout << "Enter second: ";
		cin >> s;
		//create object
		Duration d(h, m, s);
		//convert to seconds
		cout << "Duration in seconds: " << d.toSeconds() << endl;
	}
	catch (out_of_range)
	{
		// Nếu có ngoại lệ thì in ra thông báo
		cout << "Invalid input" << endl;

	}
}
#endif