#include <iostream>

class Date {
	int	year_;
	int	month_;
	int	day_;

	public:
	void	SetDate(int year, int month, int date);
	void	AddDay(int inc);
	void	AddMonth(int inc);
	void	AddYear(int inc);

	int	GetCurrentMonthTotalDays(int year, int month);
	void	ShowDate();
};

void	Date::SetDate(int year, int month, int date)
{
	year_ = year;
	month_ = month;
	day_ = date;
}

int	Date::GetCurrentMonthTotalDays(int year, int month)
{
	static int month_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (month!=2)
		return (month_day[month - 1]);
	else if (year % 4 == 0 && year % 100 != 0)
		return (29);
	else
		return (28);

}

void	Date::AddDay(int inc)
{
	while(true)
	{
		int current_month_total_days = GetCurrentMonthTotalDays(year_, month_);
		if (day_ + inc <= current_month_total_days)
		{
			day_ += inc;
			return;
		}
		else
		{
			inc -= (current_month_total_days - day_ + 1);
			day_ = 1;
			AddMonth(1);
		}
	}
}

void	Date::AddMonth(int inc)
{
	AddYear((inc + month_ - 1) / 12);
	month_ = month_ + inc % 12;
	month_ = (month_ == 12 ? 12 : month_ % 12);
}

void Date::AddYear(int inc)
{ year_ += inc; }


void	Date::ShowDate()
{
	std::cout << "Today is " << year_ << " year " << month_ << " month " << day_ << "day." << std::endl;
}

int	main()
{
	Date day;
  day.SetDate(2011, 3, 1);
  day.ShowDate();

  day.AddDay(30);
  day.ShowDate();

  day.AddDay(2000);
  day.ShowDate();

  day.SetDate(2012, 1, 31);  // 윤년
  day.AddDay(29);
  day.ShowDate();

  day.SetDate(2012, 8, 4);
  day.AddDay(2500);
  day.ShowDate();

	std::string tmp;

	tmp = "adsdadadad";
	std::cout << tmp << std::endl;
	std::cout << tmp.length() << std::endl;
	tmp.clear();
	std::cout << tmp << std::endl;
	std::cout << tmp.length() << std::endl;

  return 0;
}
