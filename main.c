#include <stdio.h>
#include <stdlib.h>

int main(){
  char* userInput;
  printf("Type 'funny' or 'inspirational' to receive a funny or inspirational quote, respectively: \n");
  scanf("%s", userInput);
  
  printf("%s", userInput);
}
