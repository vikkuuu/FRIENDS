#include "info.h"

void Friend::Intial()
{
	strcpy(NAME,"NAME");
	strcpy(PHONE_NUMBER,"PHONE NUMBER");
	strcpy(SEX,"SEX");
	strcpy(AGE,"AGE");
	strcpy(CLASS,"CLASS");
}

void Friend::get_input()
{
	string S;
	getline(cin,S);

	cout<<"NAME: ";
	scanf("%[^\n]%*c",NAME);

	cout<<"PHONE NUMBER: ";
	scanf("%[^\n]%*c",PHONE_NUMBER);

	cout<<"AGE: ";
	scanf("%[^\n]%*c",AGE);

	cout<<"SEX: ";
	scanf("%[^\n]%*c",SEX);

	cout<<"CLASS: ";
	scanf("%[^\n]%*c",CLASS);

}

void Friend::write()
{
	ofstream fout;
	fout.open("friend.txt",ios::app);

	int p=fout.tellp();
	fout<<NAME;
	int pos=fout.tellp();
	
	for(int i=pos;i<p+100;i++)
		fout<<" ";

	p=fout.tellp();
	fout<<PHONE_NUMBER;
	pos=fout.tellp();
	
	for(int i=pos;i<p+100;i++)
		fout<<" ";

	p=fout.tellp();
	fout<<AGE;
	pos=fout.tellp();
	
	for(int i=pos;i<p+100;i++)
		fout<<" ";

	p=fout.tellp();
	fout<<SEX;
	pos=fout.tellp();
	
	for(int i=pos;i<p+100;i++)
		fout<<" ";

	p=fout.tellp();
	fout<<CLASS;
	pos=fout.tellp();
	
	for(int i=pos;i<p+100;i++)
		fout<<" ";

	
	fout<<"\n";

	fout.close();
}