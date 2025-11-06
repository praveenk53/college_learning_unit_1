#include<stdio.h>
int main()
{
    int principle , rate, time;
    float simple_interest;
    printf("Enter principle, rate and time: ");
    scanf("%d %d %d",&principle,&rate,&time);
    simple_interest = (principle * rate * time) / 100;
    printf("Simple Interest is %.2f", simple_interest);
    return 0;
}