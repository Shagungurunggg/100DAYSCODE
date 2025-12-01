Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>
#include <string.h>

int main() {
    enum Traffic {RED, YELLOW, GREEN};
    char input[10];
    scanf("%s", input);

    enum Traffic t;
    if (strcmp(input, "RED") == 0) t = RED;
    else if (strcmp(input, "YELLOW") == 0) t = YELLOW;
    else t = GREEN;

    if (t == RED) printf("Stop");
    else if (t == YELLOW) printf("Wait");
    else printf("Go");

    return 0;
}
