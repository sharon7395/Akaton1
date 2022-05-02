#pragma once
#include<iostream>
#include <ctime>

using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;
    bool setDay(int);
    bool setMonth(int);
    bool setYear(int);
public:
    Date();
    Date(int, int, int);
    Date(const Date&);
    ~Date();
    void today();
    int getDay() { return day; }
    int getMonth() { return month; }
    int getYear() { return year; }
    bool validDate(int, int, int);
    void setDate(int, int, int);
    void printDate()const;
    void printMonth();
    int getDays();
    bool isLeapYear();
    Date getNextDate();
    /*friend ostream& operator<<(ostream& os, Date& A);
    friend istream& operator >> (istream& input, Date& A);*/
};
