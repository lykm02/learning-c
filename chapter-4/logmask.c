#include <syslog.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	int logmask;
	openlog("logmask",LOG_PID|LOG_CONS,LOG_USER);
	syslog(LOG_INFO,"this is pid : %d",getpid());
	syslog(LOG_DEBUG,"this should appear");
	logmask= setlogmask(LOG_UPTO(LOG_NOTICE));
	syslog(LOG_DEBUG,"this should not appear");
	exit(0);
}
