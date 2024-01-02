#include <stdio.h>

#include <sys/stat.h>

int main(int argc, char* argv[]){
FILE *fp;
struct stat fi;
if(argc>=2){
if(stat(argv[1], &fi)==0){
fp=fopen(argv[1], "w");

}
}
}
