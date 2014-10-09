#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "graf_lib.h"

void readline(char* dest, int n, FILE* source){
  fgets(dest, n, source);
  int len = strlen(dest);
  if(dest[len -1] == '\n')
    dest[len -1] = '\0';
}

char* read_buffer(int len){
  char* buffer = malloc(sizeof(char)*len);
  readline(buffer, len, stdin);
  buffer[len] = '\0';
  return buffer;
}

void user_creat_node(){
  
}

void user_creat_link(){

}

void user_delete_node(){

}

void user_delete_link(){

}

int main(int argc, char* argv[]){
  if(argc < 1){
    return -1;
  }
  int choice = -1;
  while(choice != 0){
    puts("please choose an operation");
    puts("1. create a node");
    puts("2. creat a link between nodes");
    puts("3. delete a node");
    puts("4. delete a link between nodes");
    puts("0. exit");
    printf("? ");
    scanf("%d", &choice);
    while(getchar() != '\n'); //Clear stdin
    switch(choice){
    case 1:
      user_creat_node();
      break;
    case 2:
      user_creat_link();
      break;
    case 3:
      user_delete_node();
      break;
    case 4:
      user_delete_link();
      break;
    case 0:
      break;
      //defualt:
      //puts("could not prase chocice! please try again");
    }
    puts("");
  }
  return 0;
}
