#include <stdio.h>

int main()
{
    float d, fare = 100;

    scanf("%f", &d);

    if (d > 10)
        fare = fare + (d - 10) * 20;

    char member;
    scanf(" %c", &member);

    if (member == 'y' || member == 'Y')
        fare = fare * 0.9;

    printf("Final Fare: %.0f", fare);

    return 0;
}