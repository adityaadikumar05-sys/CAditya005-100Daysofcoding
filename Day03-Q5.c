//Q5: Write a program to convert temperature from Celsius to Fahrenheit.


#include <stdio.h>

int main() {
    int temp_cel, temp_fahr;
    scanf("%d",&temp_cel);
    temp_fahr = ((9/5)*temp_cel)+32;
    printf("Fahrenheit=%d\n",temp_fahr);
    return 0;
}
