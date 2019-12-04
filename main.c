#include <stdio.h>
#include <stdlib.h>

int main(){
  //reading user input to determine the type of quote to send out
  char userInput;
  printf("Type 'F' or 'I' to receive a funny or inspirational quote, respectively: \n");
  scanf("%c", &userInput);
  
  char* theQuote;
  switch(userInput){
    case 'F' :
      //fetch a funny quote and save it to theQuote
      printf("funny\n");
      break;
    case 'I' :
      //fetch an inspirational quote and save it to theQuote
      printf("inspirational\n");
      break;
    default :
      printf("Invalid request\n");
  }
  
  //printf("%s", userInput);
}
