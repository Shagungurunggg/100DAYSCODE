Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
#include <string.h>
struct Date {
    int day;
    int month;
    int year;
};


struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee emp;

    
    strcpy(emp.name, "Raj");
    emp.id = 11;
    emp.joiningDate.day = 12;
    emp.joiningDate.month = 5;
    emp.joiningDate.year = 2020;

    
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n",
           emp.name,
           emp.id,
           emp.joiningDate.day,
           emp.joiningDate.month,
           emp.joiningDate.year);

    return 0;
}
