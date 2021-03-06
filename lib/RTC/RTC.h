/*
    Copyright (c) 2012 <benemorius@gmail.com>

    Permission is hereby granted, free of charge, to any person
    obtaining a copy of this software and associated documentation
    files (the "Software"), to deal in the Software without
    restriction, including without limitation the rights to use,
    copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following
    conditions:

    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
    OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
    HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
    WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
    OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef RTC_H
#define RTC_H

#include <lpc17xx_rtc.h>

class RTC
{
public:
	RTC();

	void setTime(RTC_TIME_Type* time);
	void getTime(RTC_TIME_Type* time);

	uint8_t getSecond();
	uint8_t getMinute();
	uint8_t getHour();
	uint8_t getDay();
	uint8_t getMonth();
	uint16_t getYear();
	
	void setSecond(uint8_t second);
	void setMinute(uint8_t minute);
	void setHour(uint8_t hour);
	void setDay(uint8_t day);
	void setMonth(uint8_t month);
	void setYear(uint16_t year);

private:
	RTC_TIME_Type time;
};

#endif // RTC_H
