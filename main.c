/*A simple calculator
Created By
Bogomba Sharon
On 18th, February 2022
MIT Licence.
C89 Compiler
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    char name[100];
    int r1,r2,sum,diff,product;
    float quot;
    printf("simple calculator!\n");
    //capture input
    printf("Enter your name: ");
    gets(name);
    printf("Enter two integers: ");
    scanf("%d%d",&r1,&r2);
    //Copulations
    sum = r1 + r2;
    diff = r1 - r2;
    product = r1 * r2;
    quot = (float)r1/r2;

    //outputs
    printf("Hey %s, here is your results:\n",name);
    printf("%6d + %6d = %6d\n",r1,r2,sum);
    printf("%6d - %6d = %6d\n",r1,r2,diff);
    printf("%6d * %6d = %6d\n",r1,r2,product);
    printf("%6d / %6d = %6.2f\n",r1,r2,quot);
    return 0;
}
