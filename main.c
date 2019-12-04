#include <stdio.h>
#include <stdlib.h>

int main(){
  //reading user input to determine the type of quote to send out
  char* userInput;
  printf("Type 'funny' or 'inspirational' to receive a funny or inspirational quote, respectively: \n");
  scanf("%s", userInput);
  
  char* theQuote;
  switch(userInput){
    case "funny" :
      //fetch a funny quote and save it to theQuote
      printf("funny");
    case "inspirational" :
      //fetch an inspirational quote and save it to theQuote
      printf("inspirational");
  }
  
  //printf("%s", userInput);
}
