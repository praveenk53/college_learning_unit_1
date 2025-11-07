#include<stdio.h>
int main()
{
    const int maxScore = 80;
    volatile int sensorValue = 25;
    printf("constant value: %d\n", maxScore);
    printf("volatile value: %d\n", sensorValue);
    return 0;
}