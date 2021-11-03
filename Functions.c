#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

// Function for Calculating Hypotenuse using Pythagorean theorem.


double function_hyp(double s1,double s2)
{
    double result;
    double h;
    h=(s1*s1)+(s2*s2);
    result=sqrt(h);
    printf("\nHypotenuse is %lf\n",result);
}

// Function for Identifying Smallest Number among the three scanned numbers


int smallest_number(int x,int y,int z)
{
    int smallest;
    if(x<y && y<z)
        {
            smallest=x;
        }
    if(y<x && x<z)
        {
            smallest=y;
        }
    if(z<x && x<y)
        {
            smallest=z;
        }
        else if(x==y && y==z)
            {
                printf("\nAll the numbers are equal\n");
            }

        else {printf("\nThe smallest number is %d\n",smallest);}

}

// Function for a basic calculator.



double calculator(double num1, double num2, char Operator)
{
    switch(Operator)
    {
    case '+':
        printf("\nThe sum of two number is %lf\n",num1+num2);
        break;
    case '-':
        printf("\nThe subtraction of two number is %lf\n",num1-num2);
        break;
    case '/':
        printf("\nThe division of two number is %lf\n",num1/num2);
        break;
    case '%':
        printf("\nThe modulus of two number is %d\n",(int)num1%(int)num2);
        break;
    case '*':
        printf("\nThe multiplication of two number is %lf\n",num1*num2);
        break;
    default :
        printf("\nEnter the valid operator");
    }
}

// Main Function


int main()
{

    double s1,s2,num1,num2;
    char operato_r,menu,i;
    int x,y,z;
    while(i!='N' && i!='n')
    {
    printf("\n------------LIST------------\n");
    printf("\n----CHOOSE FROM THE LIST----\n");
    printf("\nPress C for BasicCalculator Function\n");
    printf("\nPress S for Smallest No. Function\n");
    printf("\nPress H for Hypotenuse Function\n");

    menu=getche();
    system("cls");

    switch(menu)
    {

    case 'C':
    case 'c':

        printf("\nEnter the operator of the operation you want to perform: ");
        operato_r=getche();
        printf("\nEnter the first number : ");
        scanf("%lf",&num1);
        printf("\nEnter the second number : ");
        scanf("%lf",&num2);
        calculator(num1,num2,operato_r);

    break;
    case 'H':
    case 'h':

        printf("\nEnter the first side of the triangle : ");
        scanf("%lf",&s1);
        printf("\nEnter the second side of the triangle : ");
        scanf("%lf",&s2);
        function_hyp(s1,s2);
    break;
    case 'S':
    case's':

        printf("\nEnter the first number : ");
        scanf("%d",&x);
        printf("\nEnter the second number : ");
        scanf("%d",&y);
        printf("\nEnter the third number : ");
        scanf("%d",&z);
        smallest_number(x,y,z);
    break;
    default:
        printf("\n You have entered a wrong Button, Please read the List Carefully. \n");
    }


    printf("\nDo you wish to use the program again? Press 'Y' if Yes or Press 'N' if No.\n");
    i=getche();
    system("cls");

    }

    return 0;
}
