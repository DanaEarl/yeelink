/*
 * main.c
 *
 *  Created on: Sep 25, 2012
 *      Author: wanli
 */
#include"yeelink.h"


//#define PORT 80/*定义端口号*/
// #define REMOTE_IP "211.87.4.65"
#define REMOTE_ADDR "www.baidu.com"
//#define PORT 4321  
//#define REMOTE_IP "192.168.1.104"  

int main()
{

	// int sockfd;/*定义两个套接口描述符*/
	// struct sockaddr_in addr;/*定义IPV4套接口地址数据结构address* */
	// struct hostent *host;
	// char buf[256];
	// int addr_len = sizeof(struct sockaddr_in);
	char *buf;
	// if((host=gethostbyname(HOST_NAME)) == NULL)/*取得主机IP地址*/
	// 	printf("gethost error\n");
	// if(-1==(sockfd=socket(AF_INET,SOCK_STREAM,0))){
	// 	perror("socket");
	// 	return -1;
	// }
	// init_sockaddr( (struct sockaddr_in *)(&addr),(host) );
	// getconnect(sockfd,(struct sockaddr_in *)&addr);
	// buf=show_datapoint(6285,9765,NULL);
	 buf=list_devices();
	printf("\n\nreceive message:%s\n", buf);
	// printf("connect ok\n");

	return 0;
}
