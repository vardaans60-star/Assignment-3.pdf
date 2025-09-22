/*
  Name=Vardaan Sharma
  Group=1A32
  Date=7-9-2025
  Roll No.=1025040028
*/
#include<stdio.h>
 int main()
 {
 int x,y,p,z,calculation,u,v,d;
 printf("Enter your numbers:  ");
  scanf("%d %d",&x,&y);
  printf("Choose your operation(1 for addition,2 for subtraction,3 for multiplication,4 for division,5 for modulus) ");
  scanf("%d",&calculation);
 switch(calculation){
 	case 1:
 		p=x+y;
 		printf("%d",p );
 		break ;
 	case 2:
 		z=x-y;
 		printf("%d",z);
 		break;
 	case 3:
 		u=x*y;
 		printf(" %d",u);
 		break;
 	case 4:
 		v=x/y;
 		printf("%d ",v);
 		break ;
 	case 5:
 		d=x%y;
 		printf("%d",d);
 		break ;
    default:
    	printf("Calculator Signing Off");
 }
 }
