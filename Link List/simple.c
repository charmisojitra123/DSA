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

void insertFirst(int val)
{
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
        temp->next = head;
        head = temp;
            
        return;
    } 
}

void deleteEnd()
{
    struct node *ptr = head;
    struct node *p;

    if(head == NULL)
    {
        printf("List is already empty.....\n");
    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }

    while(ptr->next != NULL)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = NULL;
    free(ptr);
    return;
}

void deleteFirst()
{
    struct node *ptr = head;

    if(head == NULL)
    {
        printf("List is already empty.....\n");
    }
    else 
    {
        head = head->next;
        free(ptr);
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
            printf("%d\t", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}

int main()
{
    int choice,n;
    do{

        printf("1. Insert \n2. Display \n3. Delete \n4. Insert First \n5. Delete First\n0. Exit\n");
    
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
            deleteEnd();
            break;
        
        case 4:
            printf("Enter the element :- ");
            scanf("%d", &n);
            insertFirst(n);
            break;

        case 5:
            deleteFirst();
            break;

        case 0:   
            exit(0);       
            break;

        default:
            printf("Invalid choice\n");
    }
    }
    while(choice != 6);
    
    return 0;
}