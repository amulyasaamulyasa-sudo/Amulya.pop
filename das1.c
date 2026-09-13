#include<stdio.h>
#include<conio.h>
#define SIZE 15

void create(int array[], int n)
{
    int i;
    printf(" Enter n elemnts\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&array[i]);
    }
    return ;
}

void display(int array[], int n)
{ 
    int i;
    printf(" Elemnets of the array are\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
}

int insertAtPos(int array[], int n, int position, int value)
{
    int i;
    for (i = n ;i>= position; i--)
        array[i+1] = array[i];
    array[position] = value;
    n++; 
    return n;
}

int deleteFromPos(int array[], int n, int position)
{
    int i, v;
    v=array[position];
    for (i = position; i<= n; i++)
        array[i] = array[i+1];
    n--; 
    return n; 
}

int main()
{
    int array[SIZE], n, choice, flag=0;
    int position, value; int count=0;
    char answer;

    while(1)
    {
        printf("1. Create\n");
        printf("2. Display\n");
        printf("3. Inserting Element at given valid position\n");
        printf("4.Delete an Element at a given valid Position \n");
        printf("5. Exit\n");
        printf("Enter choice =");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1 :if(flag==0)
            {
                flag=1;
                printf("Enter no. of elements=");
                scanf("%d", &n);
                // if n is > SIZE. Reduce n=SIZE
                if(n>SIZE) n=SIZE;
                create(array,n);
            }
            else
            {
                printf("Array is already created.....");
            }
            break;

            case 2:display(array, n);
            break;

            case 3:printf("Enter the location to insert element=\n");
            scanf("%d", &position);
            if(position>=SIZE || position>n+1)
            {
                printf("IT is not valid Position");
                break;
            }

            printf("Enter the value to insert=\n");
            scanf("%d", &value);
            n=insertAtPos(array, n, position, value);
            break;

            case 4:printf("Enter the location to delete element\n");
            scanf("%d", &position);
            if(position>n)
            {
                printf("Postion is beyond the array element\n"); 
                break;
            }

            if(n==0)
            {
                printf("Array is empty\n"); break;
            }

            n=deleteFromPos(array, n, position);
            break;

            case 5 :return 0;
            default:printf(" Please enter correct choice");
            break;
        }

        getch();
    }

    return 0;
}