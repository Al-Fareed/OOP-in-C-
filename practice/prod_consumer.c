
//program to perform producer-consumer problem(using semaphore)
#include<stdio.h>
#include<stdlib.h>

int mutex=1,full=0,empty=3,x=0,ch;
int main()
{
	void producer();
	void consumer();
	int wait(int);
	int signal(int);
	printf("\n1.Producer\n2.Consumer\n3.Exit");
	while(1)
	{
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:if((mutex==1) && (empty!=0))
				       producer();
			       else
				       printf("Buffer is full ");
			       break;
			 case 2: if((mutex==1) &&(full!=0))
					 consumer();
				 else
					 printf("Buffer is Empty");
				 break;
			case 3:
				 exit(0);
				 break;
		}
	}
	return 0;
}

	
	int wait(int s)
	{
		return(--s);
	}

	int signal(int s)
	{
		return ++s;
	}
	void producer()
	{
		mutex=wait(mutex);
		full=signal(full);
		empty=wait(empty);
		x++;
		printf("\n Producer has produced the item %d",x);
		mutex=signal(mutex);
	}
	void consumer()
	{
		mutex=wait(mutex);
		full=wait(full);
		empty=signal(empty);
		printf("\n Consumer has consumed the item %d",x);
		x--;
		mutex=signal(mutex);
	}

