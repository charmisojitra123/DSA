#include <stdio.h>

int arr[5],top=-1,size=5,value;

void getdata()
{
    for(int i=0;i<5;i++)
    {
        printf("Enter the element of array :- ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
}

void insertdata()
{
    if(top > size-1)
    {
        printf("Stack is Overflow.\n");
    }
    else
    {
        printf("Enter the element of array to insert :-");
        scanf("%d",&value);
        top++;
        arr[top] = value;
    }
}

void fifoinsert()
{
    if(top >= size-1)
    {
        printf("Stack is Overflow.\n");
    }
    else
    {
        printf("Enter the element of array to insert :-");
        scanf("%d",&value);
        top++;
        for(int i=top; i>=0; i--)
        {
            arr[i] = arr[i-1];
        }
        
        arr[0]=value;

        for(int i=0;i<=top;i++)
        {
            printf("%d\t",arr[i]);
        }
    }
}

void deletedata()
{
    if(top < 0)
    {
        printf("Stack is Empty.\n");
    }
    else
    {
        printf("Array after delete element :- %d\n",arr[top]);
        top--;
    }
}

void fifodelete()
{
    if(top < 0)
    {
        printf("Stack is Empty.\n");
    }
    else
    {
        printf("Array after delete element :- %d\n",arr[top]);
        for(int i=0;i<=top;i++)
        {
            arr[i] = arr[i+1];
        }
        top--;
    }
}

void display()
{
    if(top >= 0)
    {
        printf("Element of Array \n");
        for(int i=0;i<=top;i++)
        {
            printf("%d\t",arr[i]);
        }
    }
    else
    {
        printf("Stack is Empty.\n");
    }
}

int main ()
{
    //getdata();

    int temp;

    while(temp!=0)
    {

    printf("\nSelect want you want to perfome :- \n");
    printf("1. Insert Data\n");
    printf("2. Delete Data\n");
    printf("3. Display Data\n");
    printf("4. FIFO Insert Data\n");
    printf("5. FIFO Delete Data\n");
    printf("0. Exit\n");
    scanf("%d",&temp);

    switch(temp)
    {
        case 1:
            insertdata();
            for(int i=0;i<=top;i++)
            {
                printf("%d\t",arr[i]);
            }
            break;

        case 2:
            deletedata();
            for(int i=0;i<=top;i++)
            {
                printf("%d\t",arr[i]);
            }
            break;

        case 3:
            display();
            break;

        case 4:
            fifoinsert();        
            break;

        case 5:
            fifodelete();
            for(int i=0;i<=top;i++)
        {
            printf("%d\t",arr[i]);
        }
            break;
        
        case 0:
            printf("Thank you !!!");
            break;

        default:
            printf("Please enter valid number :- \n");
            break;
    }
    }

    return 0;
}