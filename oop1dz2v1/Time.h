#ifndef OOP1DZ2V1_TIME_H
#define OOP1DZ2V1_TIME_H
#include "Errors.h"
#include <iostream>

using namespace std;


class Time {
    static int MAX_HOURS,MAX_MINUTES,MAX_MONTHS, MAX_DAYS;
    int minute, hour, day, month, year;
public:
    Time(int minute, int hour, int day, int month, int year) {
        if ((minute < 0 || minute > MAX_MINUTES) || (hour < 0 || hour > MAX_HOURS) || (day < 0 || day > MAX_DAYS) ||
            (month < 0 || month > MAX_MONTHS) || year < 0) {
            throw InvalidTime();
        }
        this->minute = minute, this->hour = hour, this->day = day, this->month = month, this->year = year;
    };

    friend bool operator==(const Time &time1, const Time &time2);

    friend bool operator<(const Time &time1, const Time &time2);

    void operator+=(int minutes);

    int get_month_days() const;

    friend ostream &operator<<(ostream &os, const Time &time);

};

#endif //OOP1DZ2V1_TIME_H
