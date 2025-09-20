/*
  Name=Vardaan Sharma
  Group=1A32
  Date=7-9-2025
  Roll No.=1025040028
*/
#include<stdio.h>
 int main()
 {
 	int x,y,z;
 	printf("Enter your three numbers:");
 	scanf("%d %d %d",&x,&y,&z);
 	int choosen=(x>y && x>z)? x:((y>z)?y:z);
 	printf("%d is a greatest of all three integers",choosen);
 }
