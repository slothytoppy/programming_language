#include "main.h"

int main(int argc, char* argv[]){
	int i;
  for(i=1; i<argc; i++){
  printf("argv%d:%s\n", i, argv[i]);
  }
  printf("hello world\n");
}
