#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
	struct tm *tm_ptr, tmstruct;
	time_t the_time;
	char buffer[256];
	char *result;
	(void) time(&the_time);
	tm_ptr=localtime(&the_time);
	strftime(buffer,256,"%A %d %B, %I:%S %p",tm_ptr);
	
	printf("strftime gives: %s\n",buffer);
	strcpy(buffer,"Mon 20 June 2016, 13:29 also be fine.\n");
	printf("strptime args is :%s\n ", buffer);
	tm_ptr = &tmstruct;
	result = strptime(buffer,"%a %d %b %Y, %R",tm_ptr);
	printf("strptime return value is:%s\n",result);
	
	printf("strptime gives:\n");

 printf("date: %02d/%02d/%02d\n",tm_ptr->tm_year,tm_ptr->tm_mon+1,tm_ptr->tm_mday);
        printf("time: %02d:%02d:%02d\n",tm_ptr->tm_hour,tm_ptr->tm_min,tm_ptr->tm_sec);
        exit(0);
	
}
