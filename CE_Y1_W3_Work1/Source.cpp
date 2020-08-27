#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int sum = a + b + c;
    if (a < 0 || b < 0 || c < 0 || sum > 100) {
        printf("Error");
    }
    else {
    if (sum <= 49 && sum >= 0) {
        printf("Your Grade is F");
    }
    else  if (sum <= 54 && sum >= 50) {
        printf("Your Grade is D");
    }
    else  if (sum <= 59 && sum >= 55) {
        printf("Your Grade is D+");
    }
    else  if (sum <= 64 && sum >= 60) {
        printf("Your Grade is C");
    }
    else  if (sum <= 69 && sum >= 65) {
        printf("Your Grade is C+");
    }
    else  if (sum <= 74 && sum >= 70) {
        printf("Your Grade is B");
    }
    else  if (sum <= 79 && sum >= 75) {
        printf("Your Grade is B+");
    }
    else  if (sum <= 100 && sum >= 80) {
        printf("Your Grade is A");
    }
    }
}