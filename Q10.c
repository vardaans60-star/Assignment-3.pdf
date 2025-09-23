/*
  Name=Vardaan Sharma
  Group=1A32
  Date=7-9-2025
  Roll No.=1025040028
*/
#include <stdio.h>
#include<math.h>

int main() {
    int i=0,sum=0;
    while(1){
    	printf("Enter your numbers < -999\n");
    	scanf("%d",&i);
    if(i==-999){
		printf("%d",i);
		break;
	}
	sum+=i;
	}
	printf("The sum of numbers you entered is %d",sum);
}
