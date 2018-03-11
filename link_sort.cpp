#include<stdio.h>
#include<stdlib.h>
//creation of a linked list
struct node 
{
int data;
struct node *next;
};
void display(struct node *start);//function to display inked list
int main()
{
struct node *start,*t,*r;
start=NULL;


int n,num,i;

printf("\n enter the number of elements");
scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("\n enter the %d element",i);
	scanf("%d",&n);
	r=(struct node *)malloc(sizeof(struct node));
	r->data=n;
    t=start;
	if(start==NULL || start->data>n)//if the elemnt id the first element or the element is less than the current element
		{
		start=r;
		start->next=t;
		}
		else
		{
			t=start;
		while(t!=NULL)
		{
			if(t->data<n && (t->next==NULL || t->next->data>n))//element has to added in the end or else it should be added between the following elements
			{
				r->next=t->next;
				t->next=r;
			}
			t=t->next;
		}
		}
	}
	display(start);
}
void display(struct node *start)
{
	struct node *display;
	display=start;
	while(display!=NULL)
	{
		printf("%d ",display->data);
		display=display->next;
	}
}