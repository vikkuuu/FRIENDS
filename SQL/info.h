#include <bits/stdc++.h>
using namespace std;

class Friend
{
public:
	char NAME[100];
	char CLASS[100];
	char SEX[100];
	char PHONE_NUMBER[100];
	char AGE[100];

	int column=5;

	void Intial();
	void get_input();
	void read();
	void write();
	void update();
};