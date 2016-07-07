#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	time_t time_val;
	(void) time(&time_val);
	printf("date is %s\n",ctime(&time_val));
	exit(0);

}
