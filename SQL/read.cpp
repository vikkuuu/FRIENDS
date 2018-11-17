#include "info.h"

void Friend::read()
{
	ifstream fin;
	fin.open("friend.txt");

	while(1)
	{
		for(int i=0;i<column;i++)
		{
			int j=25;
			while(j--)
				cout<<(char)fin.get();
			fin.seekg(75,ios_base::cur);
		}
		cout<<endl;
		if(fin.tellg()<=0)
			break;
	}

	fin.close();

}