#include <stdlib.h>
#include <stdio.h>	
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* insert(Node *head,int data)
{
    if(head==NULL)
    {
        head=(Node*)malloc(sizeof(Node));
        head->data=data;
        head->next=NULL;
    }
    else
    {
        Node *temp,*tail;
        tail=head;
        while(tail->next!=NULL)
        {
            tail=tail->next;
        }
        temp=(Node*)malloc(sizeof(Node));
        tail->next=temp;
        temp->data=data;
        temp->next=NULL;
    }
    return head;
}

void display(Node *head)
{
	Node *start=head;
	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}
int main()
{
	int T,data;
    scanf("%d",&T);
    Node *head=NULL;	
    while(T-->0){
        scanf("%d",&data);
        head=insert(head,data);
    }
  display(head);
		
}
