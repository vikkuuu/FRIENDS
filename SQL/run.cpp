#include "info.h"
#include "RUN.h"

void run(int key)
{

	if(key==0)
	{
		class Friend intial;
		intial.Intial();
		intial.write();
	}

	if(key==1)
	{
		class Friend WRITE;
		WRITE.get_input();
		WRITE.write();
	}

	if(key==2)
	{
		class Friend READ;
		READ.read();
	}

}