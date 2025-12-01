Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    
    struct Student *ptr = (struct Student *)malloc(sizeof(struct Student));

    if (ptr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    
    printf("Enter Name Roll Marks: ");
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    
    printf("Name: %s | Roll: %d | Marks: %d",
           ptr->name, ptr->roll, ptr->marks);

    
    free(ptr);

    return 0;
}
