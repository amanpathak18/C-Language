#include <stdio.h>
int main()
{
        float cent,fahren;
        printf("Enter temperature in Centigrade standard= ");
        scanf("%f",&cent);
        fahren=(cent*9/5)+32;
        printf("Temperature in Fahrenheit= %.2f",fahren);
        return 0;
}