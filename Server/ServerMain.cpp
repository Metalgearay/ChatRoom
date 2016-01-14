#include "Server.h"
#include <iostream>
#include <cstdlib>

int main(int argc, char ** argv)
{   if(argc<2)
	{
		std::cout << "Usage Server [portnumber]";
		exit(0);
	}
	int portno  = atoi(argv[1]);
	EasySocket serv(portno);
	while(1)
	{
		serv.accept();
	}
	return 0;
}