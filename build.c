#define COMPILATION_IMPLEMENTATION
#define DEBUG
#include "../nomake/nomake.h"

int main(int argc, char* argv[]){
GO_REBUILD(argc, argv, "cc");
if(argc>=2 && strcmp(argv[1], "clean")==0){
CLEAN(".", ".c");
return 0;
}
if(!IS_PATH_EXIST("lex.c")){
write_basic_c_file("lex.c");
}
if(!IS_PATH_EXIST("preprocessor.c")){
write_basic_c_file("preprocessor.c");
} 
if(!IS_PATH_EXIST("parser.c")){
write_basic_c_file("parser.c");
}
if(!IS_PATH_EXIST("codegen.c")){
write_basic_c_file("codegen.c");
}
if(!IS_PATH_EXIST("compiler.c")){
write_basic_c_file("compiler.c");
}
compile_dir(".", ".", "cc", ".c");
return 0;
}
