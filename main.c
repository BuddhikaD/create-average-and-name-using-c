#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1;
    float avg;
    double ns;
    char name [30];
    printf("Enter A Number");
    scanf("%d",&no1);
    printf("Enter Average");
    scanf("%f",&avg);
    printf("Enter Your Salary");
    scanf("%lf",&ns);
    printf("Enter Your Name");
    scanf("%s",&name);
    printf("Your Enterd Number is %d \n",no1);
    printf("Average is %2f \n",avg);
    printf("The New Salary is %lf \n",ns);
    printf("Your Name is %s \n",name);
}
