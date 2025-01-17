#include <stdio.h>
#include <string.h>
#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct {
  char name[MAX_NAME];
  int age;
}person;

person * hash_table[TABLE_SIZE];

unsigned int hash(char *name){

  int Length = strnlen(name, MAX_NAME);
  unsigned int hash_value = 0;
  for (int i=0;i<Length;i++) {
    hash_value +=name[i];
    hash_value =(hash_value * name[i])% TABLE_SIZE;
  }
  return hash_value;
}
void init_hash_table(){

  for (int i =0 ; i< TABLE_SIZE; i++) {
  
  hash_table[i] =NULL;

  }

}

void print_table(){
  for (int i=0;i<TABLE_SIZE;i++) {
    if(hash_table[i] ==NULL){
      printf("\t%i\t---\n",i);
    } else{
      printf("\t%i\t%s\n",i,hash_table[i]->name);
    }
  }
}

int main(){
  init_hash_table();
  print_table();
  printf("jacob => %u\n", hash("jacob"));
  printf("sara => %u\n", hash("sara"));
  printf("Natalie => %u\n", hash("Natalie"));
  return 0;
}
