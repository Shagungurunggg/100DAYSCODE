Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);

    int max_len = 0;

    if (strlen(s) == 0) {
        printf("Length of longest substring without repeating characters: 0\n");
        return 0;
    }
    for (int i = 0; s[i] != '\0'; i++) {
        int seen[256] = {0};  
        int length = 0;

        for (int j = i; s[j] != '\0'; j++) {
            if (seen[(unsigned char)s[j]])  
                break;

            seen[(unsigned char)s[j]] = 1;
            length++;
        }

        if (length > max_len)
            max_len = length;
    }

    printf("Length of longest substring without repeating characters: %d\n", max_len);

    return 0;
}
