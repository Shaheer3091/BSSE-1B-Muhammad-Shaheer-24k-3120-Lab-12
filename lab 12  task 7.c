#include <stdio.h>
#include <ctype.h>   
#include <string.h>

int isPalindrome(char str[], int start, int end) {
    if (start >= end) {
        return 1;
    }

    if (tolower(str[start]) != tolower(str[end])) {
        return 0; 
    }
	  
     isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    if (isPalindrome(str, 0, len - 1))
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}

