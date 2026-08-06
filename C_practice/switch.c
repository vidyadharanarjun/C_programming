#include <stdio.h>

int main() {
    int state;

    printf("Enter state (0=RED, 1=YELLOW, 2=GREEN): ");
    scanf("%d", &state);

    switch (state) {
        case 0:
            printf("RED : Stop for 10 seconds");
            break;

        case 1:
            printf("YELLOW : Wait for 3 seconds");
            break;

        case 2:
            printf("GREEN : Go for 8 seconds");
            break;

        default:
            printf("Invalid State");
    }

    return 0;
}
