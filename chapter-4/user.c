#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <pwd.h>
#include <unistd.h>

int main(){
	uid_t uid;
	gid_t gid;
	struct passwd *password;
	uid = getuid();
	gid = getgid();
	printf("User is %s\n",getlogin());
	printf("User ids is uid=%d,gid=%d\n",uid,gid);
	password = getpwuid(uid);
	printf("UID password entry :\n name is %s,uid is %d,gid is %d,home is %s,shell is %s\n",password->pw_name,password->pw_uid,password->pw_gid,password->pw_dir,password->pw_shell);
	password = getpwnam("root");
	printf("root password entry :\n name is %s,uid is %d,gid is %d,home is %s,shell is %s\n",password->pw_name,password->pw_uid,password->pw_gid,password->pw_dir,password->pw_shell);
	exit(0);
}
