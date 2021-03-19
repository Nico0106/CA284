#include <stdio.h>

int main(int argc, char *argv[]){

  if(argc == 1){
    printf("You don't have enough arguments. You suck!!\n");
  } else if(argc > 1 && argc < 4){
    printf("Well done. You have %d arguments\n", argc);
    int i = 0;
    for(i = 0; i < argc; i ++) {
      printf(argv[i]);
    }
  } else{
    printf("You have to many arguments. You suck!!\n");
  }
}
