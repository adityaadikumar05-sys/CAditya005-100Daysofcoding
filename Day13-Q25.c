//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


#include <stdio.h>

int main() {
    int a,b;
    char op;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the operator: ");
    scanf(" %c",&op);
    printf("Enter the second number: ");
    scanf("%d",&b);
    switch(op) {
        case '+':printf("Sum is %d",a+b);
            break;
        case '-':printf("Difference is %d",a-b);
            break;
        case '*':printf("Product is %d",a*b);
            break;
        case '/':
            if(b==0) {
                printf("Error! Division by 0");
            } else {
                printf("Division is %d",a/b);
            }
            break;
        case '%':printf("Remainder is %d",a%b);
            break;
        default:printf("Invalid Operator");
    }
    return 0;
}