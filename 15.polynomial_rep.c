#include<stdio.h>
#include<stdlib.h>
struct node
{
    int exp,coef;
    struct node *link;
};
void main()
{
	struct node *t,*head,*ptr;
    	int e,c,co;
    	t=(struct node*)malloc(sizeof(struct node));
    	t->exp=0;
    	t->coef=0;
    	t->link=NULL;
   	ptr=head;
    	do
    	{
        	printf("Enter coefficient: ");	
        	scanf("%d",&co);
        	printf("Enter exponent: ");
        	scanf("%d",&e);
        	t=(struct node*)malloc(sizeof(struct node));
        	t->exp=e;
        	t->coef=co;
        	t->link=NULL;
        	ptr->link=t;
        	ptr=ptr->link;
        	printf("1. Add elements\n2. Display\nEnter choice: ");
        	scanf("%d",&c);
    	}while(c==1);
    	if(c==2)
    	{
        	ptr=head->link;
        	printf("F(p) = ");
        	while(ptr!=NULL)
        	{
			if(ptr->coef!=0)			
            			printf("%dX^%d + ",ptr->coef,ptr->exp);
            		ptr=ptr->link;
        	}
        	printf("0 \n");
    	}
}
