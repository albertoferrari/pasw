#include <iostream>
#include "clock.h"

using namespace std;

void clock::setTime(int hours, int minutes, int seconds)
{
	if (0 <= hours && hours < 24)
	    hr = hours;
	else 
	    hr = 0;

	if (0 <= minutes && minutes < 60)
	    min = minutes;
	else 
	    min = 0;

	if (0 <= seconds && seconds < 60)
	    sec = seconds;
	else 
	    sec = 0;
}

void clock::getTime(int& hours, int& minutes, int& seconds) const
{
	hours = hr;
	minutes = min;
	seconds = sec;
}

void clock::incrementHours()
{
	hr++;
	if(hr > 23)
 	   hr = 0;
}

void clock::incrementMinutes()
{
	min++;
	if (min > 59)
	{
	    min = 0;
	    incrementHours();
	}
}

void clock::incrementSeconds()
{
	sec++;
	if (sec > 59)
	{
	    sec = 0;
	    incrementMinutes();
	}
}

void clock::printTime() const
{
	if (hr < 10)
	    cout << "0";
	cout << hr << ":";

	if (min < 10)
	    cout << "0";
	cout << min << ":";

	if (sec < 10)
	   cout << "0";
	cout << sec;
}

bool clock::equalTime(const clock& otherClock) const
{
	return (hr == otherClock.hr 
		    && min == otherClock.min 
		    && sec == otherClock.sec);
}

clock::clock(int hours, int minutes, int seconds)
{
    if (0 <= hours && hours < 24)
        hr = hours;
    else 
        hr = 0;

    if (0 <= minutes && minutes < 60)
        min = minutes;
    else 
        min = 0;

    if (0 <= seconds && seconds < 60)
        sec = seconds;
    else 
        sec = 0;
}

clock::clock()  
{
    hr = 0;
    min = 0;
    sec = 0;
}
