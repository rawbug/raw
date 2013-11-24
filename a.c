#include<stdio.h>

int main(void){
	char buf[256] = {0}; 
	do{
		printf("%s\n",buf);
		scanf("%s",buf);
	}while(strcmp(buf,"exit")!=0);	
	
	
	return 0;
}
