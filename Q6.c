/*
  Name=Vardaan Sharma
  Group=1A32
  Date=7-9-2025
  Roll No.=1025040028
*/
#include<stdio.h>
int main(){
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	if(n%5 ==0 && n%8==0){
		printf("Your number is divisible by 5 and 8");
	}
	else if(n%5==0){
	printf("Your number is divisible by 5 only ");
}
	else if(n%8==0){
	printf("Your number is divisible by 8 only");
	}
	else{
		printf("Your number is not divisible by 5 and 8");
	}
}
