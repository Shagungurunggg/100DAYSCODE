Count characters in a string without using built-in length functions.
#include <stdio.h> 
int main()
{
    char str[100];
    int count_str = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[count_str] != '\0')
    {
        count_str++;
    }
    printf("Length of the string: %d\n", count_str - 1); 
    return 0;
}   
    
