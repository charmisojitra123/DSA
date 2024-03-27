#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if(head == NULL)
    {
        head = temp;
        return;
    }
    else
    {
        while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }            
            ptr->next = temp;
            
            return;
    } 
}

void display()
{
    struct node *ptr = head;
    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    else
    {
        while(ptr != NULL)
        {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}

int main()
{
    int choice,n;
    printf("1. Insert \n2.Display \n3.Exit\n");
    
    do{
        printf("Select your choice :- ");
        scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter the element :- ");
            scanf("%d", &n);
            insertEnd(n);
            break;

        case 2:
            display();
            break;

        case 3:          
            break;

        default:
            printf("Invalid choice\n");
    }
    }
    while(choice != 3);
    
    return 0;
}