#include <sys/utsname.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	char compute[255];
	struct utsname uts;
	
	if(gethostname(compute,255)!=0 || uname(&uts) <0 ){
		fprintf(stderr,"Could not got host information \n");
		exit(0);
	}
	printf("computor name is %s\n",compute);
	printf("System is %s,machine is %s\n",uts.sysname,uts.machine);
	printf("Nodename is %s\n",uts.nodename);
	printf("Version is %s,%s\n",uts.release,uts.version);
	exit(0);
}
