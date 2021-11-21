#include "std_lib_facilities.h"

class Date{
	int y, m, d;
public:
	Date(int y, int m, int d);
	void add_day(int n);
	int month() {return m;}
	int day() {return d;}
	int year(){return y;}
};

Date::Date(int y, int m, int d)
{
	if (y > 0)
		Date::y = y;
	else error("Invalid year");

	if (m <= 12 && m > 0)
		Date::m = m;
	else error("Invalid month");

	if (d <= 31 && d > 0)
		Date::d = d;
	else error("Invalid day");
}

void Date::add_day(int n)
{

	d += n;
	if (d > 31)
	{
		m++;
		d -= 31;
		if (m > 12)
		{
			y++;
			m -=12;
		}

	}
}

int main()
{
	Date today {1978, 6, 25};

	cout << "Today: " << today.year() << " " << today.month() << " " << today.day() << "\n";

	today.add_day(1);

	cout << "Tomorrow: " << today.year() << " " << today.month() << " " << today.day() << "\n";


}