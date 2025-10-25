 Write a program to input time in seconds and convert it to hours:minutes:seconds format
#include <stdio.h>
int main() {
    int seconds, hours, minutes, rem_seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    rem_seconds = seconds % 60;

    printf("Time = %02d:%02d:%02d\n", hours, minutes, rem_seconds);
    return 0;
}

