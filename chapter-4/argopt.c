#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
  Not work as expect.

*/
int main(int argc, char* argv[]){
	int opt;
	while((opt = getopt(argc,argv,":if:lr"))!=-1){
		switch(opt){
			case 'l':
			case 'i':
			case 'r':
				printf("option is %c \n", opt);
				break;
			case 'f':
				printf("filename is %s \n",optarg);
				break;
			case ':':
				printf("option need a value \n");
				break;
			case '?':
				printf("unknown option is %c \n",optopt);
				break;
		}
	}
	for(; optind < argc; optind++)
		printf("argument: %s\n", argv[optind]); 
	exit(0);

}
