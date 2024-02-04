#include <sys/socket.h>
#include <stdio.h>
#include <sys/un.h>
#include <string.h>

#include <netinet/in.h>
#include <stdlib.h>
#include <unistd.h>

#define PATH "/tmp/soc"
#define BUF_SIZE 100
// close krna he "/home/chetan/Code/c/khel"

int main()
{
    unlink(PATH);
    struct sockaddr_un addr;
    int cfd = -1, sfd = -1;
    char str[20] = "happy";

    // socket creation
    sfd = socket(AF_UNIX, SOCK_STREAM, 0);
    if (sfd < 0)
        exit(0);
    else
        printf("socket created\n");

    // bind -- won't happen if that path is aready in use
    memset(&addr, 0, sizeof(struct sockaddr_un));
    addr.sun_family = AF_UNIX;
    strcpy(addr.sun_path, PATH);
    if (bind(sfd, (struct sockaddr *)&addr, sizeof(struct sockaddr_un)) == -1)
        exit(0);
    else
        printf("bind success\n");

    // listen
    if (listen(sfd, 3) == -1)
        exit(0);
    else
        printf("listen done\n");

    // accept
    while (1)
    {
        start:
        cfd = accept(sfd, NULL, NULL);
        if (cfd < 0)
            exit(0);

        printf("accept done\n");
        system("clear");

        while (1)
        {
            printf("Enter:");
            scanf("%s", str);
       
            send(cfd,str,strlen(str),0);
            recv(cfd,str,strlen(str),0);
            
            printf("Message from client:%s\n",str);
        }
    }

    close(sfd);
    close(cfd);
    unlink(PATH);

    return 0;
}