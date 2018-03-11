#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
void display(struct node *start);
int main()
{
	int n,num;
	struct node *start,*temp,*tail;
	start=NULL;
	printf("\n enter the number of elements");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
	printf("\n enter the value");
	scanf("%d",&n);
	if(start==NULL)
		{
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=n;
		temp->link=NULL;
		start=temp;
		}
	else
		{
		temp=start;
		while(temp->link!=NULL)
			temp=temp->link;
		tail=(struct node *)malloc(sizeof(struct node));
		tail->data=n;
		tail->link=NULL;
		temp->link=tail;
		}
	
	}
	display(start);
	printf("\n end of program");
}
void display(struct node *start)
{
struct node *display;
display=start;
while(display=NULL)
{
printf("%d",display->data);
display=display->link;
}
}