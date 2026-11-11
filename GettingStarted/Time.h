#pragma once

// Uhrzeit

struct time
{
	int hours;
	int minutes;
	int seconds;
};

// Den Typ struct time kürzer machen :

typedef struct time Time;

extern void print(Time time);

// 2 Uhrzeiten sind gleich, wenn Stunden, Minuten und Sekunden gleich sind.
extern int equals(Time left, Time right);  

// Gegenteil von gleich
extern int notEquals(Time left, Time right);

// eine erste Uhrzeit ist kleiner (gleich) als eine zweite Uhrzeit: 
// Wie im echten Leben
extern int lessThan(Time left, Time right);
extern int greaterThan(Time left, Time right);

// extern void reset(Time time);

extern void reset(Time* time);


