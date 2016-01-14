# include "Server.h"
#include <cstdio>
EasySocket::EasySocket(int portnumber)
{
	port=portnumber;
	socketf=socket(AF_INET,SOCK_STREAM,0);
    server_add.sin_family = AF_INET;
    server_add.sin_port = htons(port);
    server_add.sin_addr.s_addr = INADDR_ANY;
    bind(socketf,(struct sockaddr * ) &server_add,sizeof(server_add));
    listen(socketf,10);
    client=sizeof(client_addr);
   


}
void EasySocket::accept()
{
	 socklen_t len = sizeof(accepted);
    if( (newsocket=::accept(socketf,(struct sockaddr*)&client_addr,&client)>0))
    {
    	
        getsockname(newsocket,(struct sockaddr*)&accepted,&len);
        fprintf(stderr,"%s",inet_ntoa(accepted.sin_addr));
    	fprintf(stderr,"%s","Connection Made");
    }
   
}