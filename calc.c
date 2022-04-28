#include <stdio.h>

int main() {
    char op;
    float num1,num2,result;
    printf("Enter an operator: ");
    scanf("%c", &op);
    printf("Enter two numbers: ");
    scanf("%f%f", &num1, &num2);
    switch (op)
    {
        case '+':
        result = num1+num2;
        break;
        case '-':
        result = num1-num2;
        break;
        case '*':
        result = num1*num2;
        break;
        case '/':
        result = num1/num2;
        break;
        default: printf ("Enter valid choice");
        break;
    }
    printf("%.2f is the result of %c on %.2f and %.2f" , result, op, num1, num2);
    
    return 0;
}
