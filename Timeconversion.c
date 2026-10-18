#include <stdio.h>

int main(void) {
    int totalSeconds, hours, minutes, seconds;

    printf("Enter total seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("\nTIME CONVERSION CALCULATOR\n");
    printf("Total Seconds  : %d\n", totalSeconds);
    printf("Converted Time : %02d:%02d:%02d\n",
           hours, minutes, seconds);

    return 0;
}
