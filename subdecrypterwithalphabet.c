#include <stdio.h>
#include <stdlib.h>

int main(){
    //initialisation of variables and arrays
	char text[1000], substitution[100];
	const char ALPHABET[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n, i;
	
	printf("Enter message: ");//prompts the user to imput a message
	scanf(" %[^\n]s", text);//stores the text imputted by the user in the array "text"
	printf("Enter an alphabet substitution by typing 26 consecutive letters, where the first will replace A, the second will replace B and so on: ");//prompts the user to imput an alphabet substitution
	scanf("%s", substitution);//stores the alphabet substitution in the array "substitution"
    
    /*This for loop executes for all characters in the array "text" until the chracter occupying index i is a
    "NULL" character*/
    for(n=0; text[n]!='\0'; n++){
  
	    //turns lowercase letters in the array "text" into UPPERCASE by subtracting 32
     	if(text[n] >= 'a' && text[n] <= 'z'){
		    text[n] = text[n] - 32;
     	}
     
        //prints the character at index "n" to the screen if it is not a letter
        if(text[n] < 'A' || text[n] > 'Z'){
                printf("%c", text[n]);
        }
        
        /* This loop tests if the character at index "n" is equal to any of the letters in the array "substitution" 
        (index 0 to index 25), and if true, the character is substituted with the corresponding chracter in the 
        array "ALPHABET" */
        for(i=0; i<26; i++){
            
            /* This "if" statement turns lowercase letters in the array "substitution" into UPPERCASE by subtracting
            32 before the substitution is done */
            if(substitution[i] >= 'a' && substitution[i] <= 'z'){
		        substitution[i] = substitution[i] - 32;
	        }
             
            /* This "if" statement tests if the charater in "text" at index "n" is equal to any character in 
            "substitution" by running through all possible indices "i". If true, the character at the same index "i" of 
            "ALPHABET" is printed to the screen */
            if (text[n] == substitution[i]){
                printf("%c", ALPHABET[i]);
            }
        }
    }
    return 0;
}