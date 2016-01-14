#include <unistd.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
class EasySocket
{
	public:
	   EasySocket(int portnumber);
	   void accept();
	   

	private:
	  int socketf,newsocket,port;
	  socklen_t client;
	  struct sockaddr_in server_add,client_addr, accepted;


};
void *handelclient(void *thing);