#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main(void)
{ 
//we set our some definition as below
	int i;
	char (*myWords)[20];
	int wordLength=20;


	myWords = malloc(wordLength * sizeof *myWords); //we created a dynamic array which will hold our word values

 
 		if(myWords==NULL) /*Memory could not be allocated, 
		 					the program should handle the error here as appropriate*/
 		{
 			printf("Memory error!");
 		}
 	
	 else{
 
 			for(i=0;i<5;i++)
 				{
				 
 				printf("Enter word #%d: ",i+1); //we can enter our value of string (char)
   				gets(myWords[i]); //we can write any word
 				strrev(myWords[i]); //after we wrote, here, our word will reverse 
   			}
			
			for(i=0;i<5;i++)
 				{
			
 			printf("%s\n",myWords[i]); //we opened a loop for print our reversing words
 			
 		}
 			
   		
}

free(myWords); //when we finished our work, then the pointer does free
myWords = NULL; //The pointed-to-data must not used again, unless re-assigned by using malloc again


return 0;
}
