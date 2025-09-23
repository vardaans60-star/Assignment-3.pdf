/*
  Name=Vardaan Sharma
  Group=1A32
  Date=23-9-2025
  Roll No.=1025040028
*/
#include <stdio.h>

int main() {
	int i=1;
printf("Enter the number:");
while(1){
	scanf("%d",&i);
	printf("you chose entered number %d\n",i);
	if(i>100){
		printf("You have reached your limt");
		break;
	}
}
}
