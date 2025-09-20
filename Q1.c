/*
  Name=Vardaan Sharma
  Group=1A32
  Date=7-9-2025
  Roll No.=1025040028
*/
#include<stdio.h>
 int main()
 {
 	char charac;
 	printf("Enter your character:");
 	scanf("%c",&charac);
 	if(charac>='A'&&charac<='Z'){
 		printf("Your chosen character is UPPERCASE");
	 }
	else if(charac>='a'&&charac<='z'){
		printf("Your chosen character is LOWERCASE");
	}
	else if(charac>='0'&&charac<='9'){
		printf("You have chosen a digit");
	}
    else
	 printf("YOU HAVE CHOSEN A SYMBOL");{
	}
 }
