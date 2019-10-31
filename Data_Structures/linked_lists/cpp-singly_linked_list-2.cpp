//linked list

#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

node *head;
node *tail;

void insert(int data)
{
	node *temp=new node;
	temp->data=data;
	temp->next=NULL;
	
	if(head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = tail->next;  //important ***
        }
	
	
}
	
	
void print()
{
	node *temp;
	temp=head;
		while(temp!=NULL) 
	{
		cout<<temp->data;
		temp=temp->next;
		
	}
	
}
	
int main()
{
	head=NULL;
	tail=head;
	insert(1);
    insert(2);
	insert(3);
	insert(4);
	print();
return 0;
}

