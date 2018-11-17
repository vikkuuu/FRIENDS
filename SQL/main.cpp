#include <bits/stdc++.h>
using namespace std;

#include "RUN.h"

void choices()
{
	cout<<"You can perform only three operation with my file"<<endl;
	cout<<"1.WRITE"<<endl;
	cout<<"2.READ"<<endl;
	cout<<"3.UPDATE"<<endl;
	cout<<"0.NOT INTERESTED"<<endl;

	while(1)
	{
		cout<<"Enter your choice  ";
		int key;
		cin>>key;

		if(key==1||key==2||key==3)
			run(key);

		if(key==0)
			break;

		cout<<"Wanna continue 1/0  ";
		
		int c;
		cin>>c;

		if(c==1)
			continue;
		else if(c==0)
			break;
		else cout<<"sorry, not understand...Let's continue"<<endl;
	}
}

void intializer()
{
	ifstream fin;
	fin.open("friend.txt");

	fin.seekg(0,ios_base::end);

	if(fin.tellg()==0)
		run(0);

	fin.close();
}

int main()
{
	intializer();
	choices();
	return 0;	

}