#include<stdio.h> 
#include<stdlib.h> 
#include<sys/types.h> 
#include<sys/socket.h> 
#include<netinet/in.h> 
#include<unistd.h> 
#include<string.h>
main(int argc,char *argv[])
{
int sockfd;
struct sockaddr_in s,c; 
char smsg[30],rmsg[30]; 
int rval;
int slen=sizeof(s); 
system("clear"); 
if(argc<3)
{
printf("\n Usage %s \t IPAdress \t Port#\n",argv[0]); 
exit(1);
}
sockfd=socket(AF_INET,SOCK_DGRAM,0); 
if(sockfd == -1)
{
perror("SOCK_CR_ERR:"); 
exit(1);
}
s.sin_family=AF_INET;
s.sin_port=htons(atoi((const char *)argv[2]));
s.sin_addr.s_addr=inet_addr(argv[1]);
printf("\n enter req msg:\t");
scanf("%s",smsg);
rval=sendto(sockfd,smsg,30,0,(struct sockaddr *)&s,sizeof(s)); 
if (rval == -1)
{
perror("CLNT: SND-ERR:");
exit(1);
}
if(rval!=-1)
{
rval=recvfrom(sockfd,(char *)rmsg,30,0,(struct sockaddr *)&s,(int
*)&slen);
if (rval == -1)
{
perror("CLNT: RECV-ERR:");
exit(1);
}
printf("\n CLI: Server Echo Response: %s \n",rmsg);
}
close(sockfd);
}