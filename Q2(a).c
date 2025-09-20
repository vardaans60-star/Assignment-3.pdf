/*
  Name=Vardaan Sharma
  Group=1A32
  Date=7-9-2025
  Roll No.=1025040028
*/
#include<stdio.h>
 int main()
 {
 	int a,b,c;
 	printf("Choose your three numbers");
 	scanf("%d %d %d",&a,&b,&c);
 	if(a>b && a>c){
 		printf("%d is the biggest of 3 chosen numbers",a);
	 }
	 else if(b>a && b>c){
	 	printf("%d is the biggest of 3 chosen numbers",b);
	 }
	 else{
	 	printf("%d is the biggest of 3 chosen numbers",c);
	 }
 }
