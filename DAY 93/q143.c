Find and print the student with the highest marks.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n = 3;
    struct Student s[n];
    for (int i = 0; i < n; i++)
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);

    int maxIndex = 0;
    for (int i = 1; i < n; i++)
        if (s[i].marks > s[maxIndex].marks)
            maxIndex = i;

    printf("Topper: %s (Marks: %d)", s[maxIndex].name, s[maxIndex].marks);
    return 0;
}
