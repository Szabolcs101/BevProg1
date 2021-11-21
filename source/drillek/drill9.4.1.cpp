#include "std_lib_facilities.h"

struct Date{
	int y;
	int m;
	int d;
};

void init_day(Date& dd, int y, int m, int d)
{
	if (y > 0)
		dd.y = y;
	else error("Invalid year");

	if (m <= 12 && m > 0)
		dd.m = m;
	else error("Invalid month");

	if (d <= 31 && d > 0)
		dd.d = d;
	else error("Invalid day");

}


void add_day(Date& dd, int n)
{

	dd.d += n;
	if (dd.d > 31)
	{
		dd.m++;
		dd.d -= 31;
		if (dd.m > 12)
		{
			dd.y++;
			dd.m -=12;
		}

	}
}

int main()
{
	Date today;
	init_day(today, 1978, 6, 25);

	cout << "Today: " << today.y << " " << today.m << " " << today.d << "\n";

	
	add_day(today, 1);

	cout << "Tomorrow: " << today.y << " " << today.m << " " << today.d << "\n";

return 0;
}





