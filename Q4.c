/*
  Name=Vardaan Sharma
  Group=1A32
  Date=7-9-2025
  Roll No.=1025040028
*/
#include<stdio.h>
 int main()
 {
 int month=9;
 printf("Choose your month number :");
 scanf("%d",&month);
 switch(month){
 	case 1:
 		printf("%d month is JANUARY");
 		break;
 	case 2:
 		printf("%d month is FEBRUARY");
 		break;
 	case 3:
 		printf("%d month is MARCH");
 		break;
 	case 4:
 		printf("%d month is APRIL");
 		break;
 	case 5:
 		printf("%d month is MAY");
 		break;
 	case 6:
 		printf("%d month is JUNE");
 		break;
 	case 7:
 		printf("%d month is JULY");
 		break;
 	case 8:
 		printf("%d month is AUGUST");
 		break;
 	case 9:
 		printf("%d month is SEPTEMBER");
 		break;
 	case 10:
 		printf("%d month is OCTOBER");
 		break;
 	case 11:
 		printf("%d month is NOVEMBER");
 		break;
 	case 12:
 		printf("%d month is DECEMBER");
 		break;
 	default :
 		printf("You have not chosen a month please choose it");
 }
 }
