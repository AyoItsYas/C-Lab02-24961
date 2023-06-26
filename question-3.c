#include <stdio.h>

int main(void)
{
    int distance, time;

    printf("Enter the distance (m) : ");
    scanf("%d", &distance);

    printf("Enter the time (s)     : ");
    scanf("%d", &time);

    printf("\n");
    printf("Average speed is       : %.2f ms-1\n", (float)distance / time);

    return 0;
}