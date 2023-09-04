#include<stdio.h>
int f1();
int f2();
int f3();
int f4();
int f5();
int main()
{	printf("\n");
	int n=4,i,j;
	for(i=0;i<=n;i++)
	{
	  for(j=0;j<=n;j++)
	  {
	    if(i==0||j==0||i==n)
	    {
	    printf(" *");
	    }
	    else
	    {
	    printf("   ");
	    }

	  }
	    printf("\n");
	
	}	printf("\t");
		printf("\n ");
		f1();
		printf("\n");
		f2();
		printf("\n");
		f3();
		printf("\n");
		f4();
		printf("\n");
		f5();
		printf("\n");
		return 0;
}	

int f1()

{
	
 int height=4;
 for(int k=0;k<=height;k++)
	{
		for(int l=0;l<=height;l++)
		{
			if(l==0||l==height-1||k==height/2)
            {
			printf(" *");
            }
			else{
			printf("   ");}
		} printf(" \n ");
		
	} 
    
}

int f2()
{
	int n=4;

	for(int i=0;i<=4;i++)
	{
		for(int j=0;j<=4;j++)
		{
			if(j==0||i==0||i==n||i==n/2)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		} printf(" \n");
	}
}

int f3()
{
	int n=4;

	for(int i=0;i<=4;i++)
	{
		for(int j=0;j<=4;j++)
		{
			if(i==0||j==n)
			{
				printf("* ");
			}
			else
			{
				printf(" ");
			}
		}	printf(" \n");	
			
	}
}

int f4()
{
	int n=5,i,j;
	
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<=2*i-1;j++)
		{
			if(j==0||j==2*i-1||i==n-2)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
	    } printf(" \n");
    }
}

int f5()
{
	int n=4,i,j;

	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
          if(j==0 || j== n || j == i)
		  {
			printf("* ");
		  }
		  else
		  {
			printf("  ");
		  }

		}printf("\n");
	}

}
