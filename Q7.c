/*
  Name=Vardaan Sharma
  Group=1A32
  Date=7-9-2025
  Roll No.=1025040028
*/
#include<stdio.h>
int main(){
	int days;
	printf("Enter your extra days you have taken to submit a book:");
	scanf("%d",&days);
	if(days>=0 && days<=5){
		printf("The fine for %d days is 50 PAISA");
}else if(days>=6 && days<=10){
	printf("The fine for %d days is 1 RUPEES");
}else if(days>10&& days<=30){
	printf("The fine for %d days is 5 RUPEES ");
}else{
	printf("YOUR MEMBERSHIP HAS BEEN CANCELED");
}
	}
	
