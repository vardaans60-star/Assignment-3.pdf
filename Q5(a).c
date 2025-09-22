/*
  Name=Vardaan Sharma
  Group=1A32
  Date=7-9-2025
  Roll No.=1025040028
*/
 #include <stdio.h>
int main() {
	int number=7;
	printf("Enter your number:");
	scanf("%d",&number);
	if(number%2==0){
		printf("Your chosen number %d is even",number);
	}
	else{
		printf("Your chosen number is %d odd\n");
	}
	if(number >= 0) {
        printf("The number %d is positive\n", number);
    } else {
        printf("The number %d is negative\n", number);
    }

}
