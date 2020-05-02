#include <stdio.h>

float add(float a,float b)
{
    float result = a + b;
    return result;
}
float subtract(float a,float b)
{
    float result = a - b;
    return result;
}
float multiply(float a,float b)
{
    float result = a * b;
    return result;
}
float divide(float a,float b)
{
    float result = a / b;
    return result;
}

int main()
{
    printf("Enter calculate ('+ - * /') : ");
    char calculate;
    scanf("%ch",&calculate);

    printf("Enter first and second number: ");
    float a,b;
    scanf("%f%f",&a,&b);


    float add_result = add(a,b);
    float subtrac_result = subtract(a,b);
    float multiply_result = multiply(a,b);
    float divide_result = divide(a,b);

    switch(calculate)
    {
        case '+':
        printf("Result is : %.2f\n",add_result);
        break;

        case '-':
        printf("Result is : %.2f\n",subtrac_result);
        break;

        case '*':
        printf("Result is : %.2f\n",multiply_result);
        break;

        case '/':
        printf("Result is : %.2f\n",divide_result);
        break;

        default:
            printf("Unknown sign!");
            break;
    }

    return 0;
}
