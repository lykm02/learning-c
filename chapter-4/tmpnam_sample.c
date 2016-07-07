#include <stdio.h>
#include <stdlib.h>

int main(){
	char tmpname[L_tmpnam];
	char *filename;
	FILE *tmpfp;	

	filename = mktemp(tmpname);
	printf("tmp file name is %s \n",filename);
	tmpfp = tmpfile();
	if(tmpfp){
		printf("open tmp file ok \n");
	}else{
		perror("fail to open tmp file");
	}
	exit(0);

}
