#include <stdio.h>
#include <stdlib.h>

char aQuote[100];


char* chooseQuote(char* filename){
  int currentLine = 0;
  int lines = 0;
  int i = 0;
  char c;
  
  //Determines the number of lines in the text file
  FILE *fp = fopen(filename, "r");
  for(c = getc(fp); c != EOF; c = getc(fp)){
		if(c == '\n'){
			lines++;
		}
  }
  fclose(fp);
  
  //Choose which quote will be used
  int r = rand() % lines; //random number between 0 and number of lines
  
  //go through the text file for r lines, then save the rth line to aQuote
  FILE *fp2 = fopen(filename, "r");
  for(c = getc(fp2); c != EOF; c = getc(fp2)){
    if(currentLine == r){
      //if the current line is the line we want to read, save each letter to aQuote until newline is hit
      if(c != '\n'){
        aQuote[i] = c;
	i++;
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
  fclose(fp2);
  
  
  return aQuote;
}




int main(){
  //reading user input to determine the type of quote to send out
  char userInput;
  printf("Type 'F' or 'I' or 'G' to receive a funny or inspirational or George quote, respectively: \n");
  scanf("%c", &userInput);
  
  
  //Determining which quote to give user & assigning it to theQuote
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
  
  
  //print the retreived quote to user
  printf("A quote has been professionally chosen for you:");
  printf("\n\n\n%s\n\n\n", theQuote);
  exit(0);
}
