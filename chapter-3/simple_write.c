#include <unistd.h>
#include <stdlib.h>

int main(){

  if(!write(1,"this is a simple std\n",21)){
	write(2,"there is a error\n",17);
  };
  exit(0);
}
