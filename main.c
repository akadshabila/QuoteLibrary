#include <stdio.h>
#include <stdlib.h>

int main(){
  //reading user input to determine the type of quote to send out
  char userInput;
  printf("Type 'f' or 'i' to receive a funny or inspirational quote, respectively: \n");
  scanf("%c", userInput);
  
  char* theQuote;
  switch(userInput){
    case 'f' :
      //fetch a funny quote and save it to theQuote
      printf("funny");
    case 'i' :
      //fetch an inspirational quote and save it to theQuote
      printf("inspirational");
  }
  
  //printf("%s", userInput);
}
