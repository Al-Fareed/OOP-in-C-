#include<stdio.h>
#include<stdlib.h>
int mutex=1,ch, empty, x=0, full=0,n;
char choice;
int main()
{
	void producer();
	void consumer();
	int wait(int);
	int signal(int);
	
	printf("\nEnter the buffer size: ");
	scanf("%d", &n);
	empty=n;
	do
	{
	
	printf("\n1.Producer\t2.Consumer\t3.Exit");
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: if((mutex==1) && (empty!=0))
		{			printf("Getting into prod\n");
					producer();
					printf("Out of buffer\n");}
				else{
					printf("\nBuffer is full");}
				break;
				
		case 2: if((mutex==1) && (full!=0))
				{ consumer();
					}	
				else
				{
						printf("\nBuffer is empty");}
				break;
				
		case 3: exit(0);
				break;
	}
//	printf("\nDo you want to continue: (y/Y)");
//	scanf("%c",&choice);
	} while(1);
		
}

int wait(int i)
{
	--i;
	return i;
}

int signal(int i)
{
	++i;
	return i;
}

void producer()
{
	mutex=wait(mutex);
	empty=wait(empty);
	++x;
	printf("\n%d item produced",x);
	mutex=signal(mutex);
	
}

void consumer()
{
	mutex=wait(mutex);
	full=wait(full);
	--x;
	printf("\n%d item consumed",x);
	mutex=signal(mutex);

}


