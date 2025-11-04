Write a program to display the month name and number of days using switch-case for a given month number.


#include <stdio.h> 
int main() {
    char month;
    printf("Enter the month name : ");
    scanf("%s", &month);
    switch(month) {
        case 'january':
        case 'march':
        case 'may':
        case 'july':
        case 'august':
        case 'october':
        case 'december':
            printf("31 days\n");
            break;
        case 'april':
        case 'june':
        case 'september':
        case 'november':
            printf("30 days\n");
            break;
        case 'february':
            printf("28 or 29 days\n");
            break;
        default:
            printf("Invalid month name\n");
    }
    return 0;
}   
