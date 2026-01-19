#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
    struct node *prev;         //$
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


void InsertFirst(PPNODE first,int no)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if(*first==NULL)
    {
       *first=newn;
    }
    else
    {
        newn->next=*first;
        (*first)->prev=newn;
        *first=newn;

    }

}

void InsertLast(PPNODE first,int no)
{
    
    PNODE newn=NULL;
    PNODE temp=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if(*first==NULL)
    {
       *first=newn;
    }
    else
    {

        temp=*first;

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }

        

    }
    temp->next=newn;
        newn->prev=temp;
}

void InsertAtPos(PPNODE first,int no,int pos)
{}



void DeleteFirst(PPNODE first)
{
    PNODE temp=NULL;

    if(*first==NULL)
    {
      return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
       *first=NULL;
    }
    else
    {
        temp=*first;
        *first=(*first)->next;
        free(temp);
        (*first)->prev;        //$

        
    }
}

void DeleteLast(PPNODE first)
{
    PNODE temp=NULL;
     if(*first==NULL)
    {
      return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
       *first=NULL;
    }
    else
    {
        temp=*first;

        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }

        free(temp->next);
        


        
    }
}

void DeleteAtPos(PPNODE first,int pos)
{}


void Display(PNODE first)
{
    while(first!=NULL)     //type 1
    {
       printf("| %d |=>",first->data);
       first=first->next;

    }
    printf("NULL\n");
}

int Count(PNODE first)
{
    return;
}




int main()
{
    PNODE head=NULL;


    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Dispaly(head);

    InsertLast(&head,108);






    return 0;

}