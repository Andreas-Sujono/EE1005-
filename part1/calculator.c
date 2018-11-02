#include<stdio.h>
#include<math.h>

int main(void)
{
    char operation;
    double num1, num2, result;

    printf("enter 2 numbers and an operator in the form\n");
    printf("number 1 operator number 2 (e.g. 4.5-2.9)(do not add a space)\n");
    scanf("%lf %c %lf", &num1, &operation, &num2);

    if(operation == '*'){
    result = num1*num2;
    }
    else if( operation == '/'){
    result = num1/num2;
    }

    else if( operation == '+'){
    result = num1+num2;
    }

    else if( operation == '-'){
    result = num1-num2;
    }
    else{
    printf("%c is not an operation",operation);
    }
    printf("%.3lf %c %.3lf is %.3lf",num1,operation,num2,result);

    return 0;
}
