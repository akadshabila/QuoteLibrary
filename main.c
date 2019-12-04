#include <stdio.h>
#include <stdlib.h>

char* chooseQuote(char* filename){
  char aQuote[100];
  int r = rand() % 20; //random number between 0 and 19, there are 20 lines for each txt file
  int currentLine = 0;
  int i;
  char c;
  FILE *fp = fopen(filename, "r");
  
  //go through the text file for r lines, then save the rth line to aQuote
  for(c = getc(fp); c != EOF; c = getc(fp)){
    if(currentLine == r){
      //if the current line is the line we want to read, save each letter to aQuote until newline is hit
      if(c != '\n'){
        aQuote[i] = c
      }
      else{
        currentLine++;
        break;
      }
    }
    else if(c == '\n'){
      currentLine++;
    }
  }
  
  return aQuote;
}

int main(){
  //reading user input to determine the type of quote to send out
  char userInput;
  printf("Type 'F' or 'I' or 'G' to receive a funny or inspirational or George quote, respectively: \n");
  scanf("%c", &userInput);
  
  char* theQuote;
  switch(userInput){
    case 'F' :
      //fetch a funny quote and save it to theQuote
      theQuote = chooseQuote("funnyQuotes.txt");
      break;
    case 'I' :
      //fetch an inspirational quote and save it to theQuote
      theQuote = chooseQuote("inspirationalQuotes.txt");
      break;
    case 'G' :
      //fetch an inspirational quote and save it to theQuote
      theQuote = chooseQuote("georgeQuotes.txt");
      break;
    default :
      printf("Invalid request\n");
  }
  
  //print the retreived quote
  printf("%s", theQuote);
}
