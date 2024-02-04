#include <sys/socket.h>
#include <stdio.h>
#include <sys/un.h>
#include <string.h>

#include <unistd.h>
#define PATH "/tmp/soc"

int main()
{
    int sfd=socket(AF_UNIX,SOCK_STREAM,0);
    int cfd;
    char str[20];
    
    struct sockaddr_un addr;
    
    addr.sun_family=AF_UNIX;
    strcpy(addr.sun_path,PATH);
    connect(sfd,(struct sockaddr *)&addr,sizeof(struct sockaddr_un));

    while(strlen(str)>1)
    {
    recv(sfd,str,sizeof(str),0);
    // read(sfd,str,strlen(str));
    printf("Message from server:%s\nEnter:",str);
    scanf("%s",str);
    send(sfd,str,sizeof(str),0);
    // write(sfd,str,strlen(str));
    }
    
    

    return 0;    
}