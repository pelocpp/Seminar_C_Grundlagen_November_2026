#include <stdio.h>

#include "Time.h"

void test_uhrzeit()
{
	// 15:24:00
	int hours = 15;
	int minutes = 24;
	int seconds = 0;

	int hours1 = 17;
	int minutes1 = 0;
	int seconds1 = 0;

	// we can do better
	Time now = { 10, 5, 30 };
	Time ende = { 17, 0, 0 };

	// oder

	ende.hours = 18;

	// oder lesen:
	int wievielStunden = now.hours;

	//// eine Struktur ausgeben:
	//printf("Uhrzeit: %02d:%02d:%02d\n", now.hours, now.minutes, now.seconds);

	//// eine Struktur ausgeben:
	//printf("Uhrzeit: %02d:%02d:%02d\n", ende.hours, ende.minutes, ende.seconds);

	//print(now);

	//print(ende);

	// ===================================

	print(now);

	reset(& now);

	print(now);
}

void print(Time time)
{
	printf("Uhrzeit: %02d:%02d:%02d\n", time.hours, time.minutes, time.seconds);
}


//void reset(Time time)
//{
//	time.hours = 0;
//	time.minutes = 0;
//	time.seconds = 0;
//}


void reset(Time* time)
{
  //   (*time).hours = 0;
	 //(*time).minutes = 0;
	 //(*time).seconds = 0;

	time -> hours = 0;
	time -> minutes = 0;
	time -> seconds = 0;
}