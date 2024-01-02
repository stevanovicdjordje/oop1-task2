#include "Time.h"
#include <iostream>

using namespace std;

int Time::MAX_MONTHS = 12;
int Time::MAX_HOURS = 24;
int Time::MAX_DAYS = 31;
int Time::MAX_MINUTES = 60;

bool operator==(const Time &time1, const Time &time2) {
    if (time1.year == time2.year and time1.month == time2.month and time1.day == time2.day and
        time1.hour == time2.hour and time1.minute == time2.minute) {
        return true;
    }
    return false;
}

bool operator<(const Time &time1, const Time &time2) {
    if (!(time1 == time2)) {
        if (time1.year < time2.year) return true;
        if (time1.month < time2.month) return true;
        if (time1.day < time2.day) return true;
        if (time1.hour < time2.hour) return true;
        if (time1.minute < time2.minute) return true;
        return false;
    }
    return false;
}

void Time::operator+=(int minutes) {
    this->minute += minutes;
    if (this->minute >= MAX_MINUTES) this->hour++, this->minute = 0;
    if (this->hour >= MAX_HOURS) this->day++, this->hour = 0;
    if (this->day > get_month_days()) this->month++, this->day = 1;
    if (this->month > MAX_MONTHS) this->year++, this->month = 1;
}

int Time::get_month_days() const {
    if (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12) return 31;
    if (month == 4 or month == 6 or month == 9 or month == 11) return 30;
    if ((year % 4 == 0 and year % 100 != 0) or (year % 400 == 0)) {
        return 29;
    }
    return 28;
}

ostream &operator<<(ostream &os, const Time &time) {
    return os << time.hour << ":" << time.minute << "-" << time.day << "." << time.month << "." << time.year << ".";
}

