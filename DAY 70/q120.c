Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int i = 0;
    while (s[i] == ' ') i++;

    if (s[i] != '\0')
        s[i] = toupper(s[i]);

    for (int j = i + 1; s[j] != '\0'; j++)
        s[j] = tolower(s[j]);

    printf("%s", s);
    return 0;
}
