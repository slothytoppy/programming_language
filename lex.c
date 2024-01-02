#include "main.h"

#define cmp(a, b) if(strcmp(a, b)==0)
#define ncmp(a, b) if(!strcmp(a, b))
#define writef(a, b) write(a, b, sizeof(b))
int main(int argc, char* argv[]){
	
	unsigned int args=argc;
	struct stat fi;
  if(args>1){
	if(stat(argv[1], &fi)==0 && fi.st_size>0){
	int fsize=fi.st_size;
	FILE* fp=fopen(argv[1], "r");
	char* fcontent=calloc(1, fsize); 
	fread(fcontent, 1, fsize, fp);
	char buf[1024];
	printf("%s", fcontent);
	}
	else{
	fprintf(stderr, "file:%s doesnt exist\n", argv[1]);
	}
} else{
fprintf(stderr, "not enough args\n");
return 1;
}
	printf("hello world\n");
}
