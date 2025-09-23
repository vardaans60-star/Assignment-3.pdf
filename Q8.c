/*
  Name=Vardaan Sharma
  Group=1A32
  Date=7-9-2025
  Roll No.=1025040028
*/
#include <stdio.h>
#include<math.h>

int main() {
    int a, b, c, d, e;
    float average,stddev,variance;

    printf("Enter your desired numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    printf("Your chosen numbers are: %d %d %d %d %d\n", a, b, c, d, e);

    average = (a + b + c + d + e) / 5.0;
    printf("Your average is %.2f\n", average);

    // Biggest number
    if (a > b && a > c && a > d && a > e) {
        printf("%d is the biggest number\n", a);
    } else if (b > c && b > d && b > e) {
        printf("%d is the biggest number\n", b);
    } else if (c > d && c > e) {
        printf("%d is the biggest number\n", c);
    } else if (d > e) {
        printf("%d is the biggest number\n", d);
    } else {
        printf("%d is the biggest number\n", e);
    }

    // Minimum number
    if (a < b && a < c && a < d && a < e) {
        printf("%d is the minimum number\n", a);
    } else if (b < c && b < d && b < e) {
        printf("%d is the minimum number\n", b);
    } else if (c < d && c < e) {
        printf("%d is the minimum number\n", c);
    } else if (d < e) {
        printf("%d is the minimum number\n", d);
    } else {
        printf("%d is the minimum number\n", e);
    }
    //variance
    variance = (pow(a - average,2) +
                pow(b - average,2)+
                pow(c - average,2) +
                pow(d - average,2 ) +
                pow(e - average,2 ))/ 5.0;

    stddev = sqrt(variance);
    printf("Standard Deviation = %.2f\n", stddev);

    return 0;
}
