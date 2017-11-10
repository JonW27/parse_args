#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ** parse_args( char * line ){
  char ** args;
  args = malloc(1000);
  int i = 0;
  char * element;
  element = malloc(1000);
  while((element = strsep(&line, " ")) != NULL){
    args[i] = element;
    i++;
  }
  args[i] = NULL;
  return args; 
}  

int main(){
  char line[100] = "ls -a -l";
  char line2[100] = "echo hello";
  char **args = parse_args( line );
  char **args2 = parse_args( line2 );
  execvp(args[0], args);
  //execvp(args2[0], args2);
  return 0;
}  
