#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

void insertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    // head->prev = NULL;

    if(head == NULL)
    {
        head = temp;
        temp->next=head;
        return;
    }
    else
    {
        while(ptr->next != head)
        {
            ptr = ptr->next;
        }            
            ptr->next = temp;
            temp->next = head;
            temp->prev = ptr;
            head->prev = temp;
        
    } 
}

void insertFirst(int val)
{
   struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if(head == NULL)
    {
        head = temp;
        temp->next=head;
        return;
    }
    else
    {
        while(ptr->next != head)
        {
            ptr = ptr->next;
        }            
            ptr->next = temp;
            temp->next = head;
            head->prev = temp;
            head = temp;
            temp->prev = head;   
    } 
}

void insertMid(int val,int pos)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    struct node *p;
    temp->data = val;

    if(head == NULL)
    {
        head = temp;
        return;
    }
    else
    {
        while(ptr->data != pos)
        {
            p = ptr;
            ptr = ptr->next;
        }           
         
            p->next = temp;
            temp->next = ptr;
            temp->prev = p;
            ptr->prev = temp;
            
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
    else 
    {
    while(ptr->next != head)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next;
    free(ptr);
    head->prev = p;
    return;
    }
}

void deleteFirst()
{
    struct node *ptr = head;
    struct node *p = head;

    if(head == NULL)
    {
        printf("List is already empty.....\n");
    }
    else 
    {
        while(ptr->next != head)
        {
            ptr = ptr->next;
        }

        head = head->next;
        free(p);
        ptr->next = head;
        head->prev = ptr;
        
        return;
    }
}

void deleteMid(int pos)
{
    struct node *ptr = head;
    struct node *p;
    struct node *a;

    if(head == NULL)
    {
        printf("List is already empty.....\n");
    }

    while(ptr->data != pos)
    {
        p = ptr;
        ptr = ptr->next;
    }
    
    p->next = ptr->next;
    a = ptr->next;
    a->prev = p;
    free(ptr);
    return;
}

void display()
{
    struct node *ptr = head;
    if(head == NULL)
    {
        printf("List is empty....\n");
        return;
    }
    else
    {
        while(ptr->next != head)
        {
            printf("%d\t", ptr->data);
            ptr = ptr->next;
        }
        printf("%d\t", ptr->data);
    }
    printf("\n");
}

int main()
{
    int choice,n,pos;
    do{

        printf("1. Insert \n2. Display \n3. Delete \n4. Insert First \n5. Delete First\n6. Insert Mid\n7. Delete Mid\n0. Exit\n");
    
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

        case 6:
            printf("Enter the element :- ");
            scanf("%d", &n);
            display();
            printf("Enter the position of element :- ");
            scanf("%d", &pos);
            insertMid(n,pos);
            display();
            break;

        case 7:
            printf("Enter the position of element :- ");
            scanf("%d", &pos);
            deleteMid(pos);
            display();
            break;

        case 0:   
            exit(0);       
            break;

        default:
            printf("Invalid choice\n");
    }
    }
    while(choice != 9);
    
    return 0;
}