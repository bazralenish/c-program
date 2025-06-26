#include <stdio.h>
int main() {
    int num, ori, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    ori = num;  

    while (num != 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    if (ori == rev) {
        printf("%d is a palindrome number.\n", ori);
    } else {
        printf("%d is not a palindrome number.\n", ori);
    }

    return 0;
}