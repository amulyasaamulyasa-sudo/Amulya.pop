#include<stdio.h>
int main()
{
    int a,b,sum;
    char section;
    float percent;

   { 
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
   }
   {
    printf("enter section:\n");
    scanf(" %c",&section);
   }
   {
    printf("enter percent:\n");
    scanf("%f",&percent);
   }
    sum=a+b;

    printf("sum of two number is %d\n",sum);
    printf("section is %c\n",section);
    printf("percent of student is %f\n",percent);
    return 0;

}
