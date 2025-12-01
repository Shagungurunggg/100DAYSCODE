Define a struct with enum Gender and print person's gender.
#include <stdio.h>
#include <string.h>

int main() {
    enum Gender {MALE, FEMALE};
    struct Person {
        enum Gender g;
    } p;

    char input[10];
    scanf("%s", input);

    if (strcmp(input, "MALE") == 0) p.g = MALE;
    else p.g = FEMALE;

    if (p.g == MALE) printf("Male");
    else printf("Female");

    return 0;
}
