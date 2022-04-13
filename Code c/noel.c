#include<stdio.h>
#include<conio.h>
 void caythongnoel(int h){
     for(int i=1;i<=h;i++)
     {
         for(int j=1;j<=h-i;j++)//thêm dấu cách
		{
			printf(" ");
		}
        for(int k=1;k<=i;k++)// them dấu *
		{
			printf("* ");
		}
		printf("\n");
     }
    for(int i=1;i<=3;i++)
	{
		for(int j=1;j<h-2;j++)
		{
			printf(" ");
		}
		for(int k=1;k<=3;k++)
		{
			printf("**");
		}
		printf("\n");
	}
 }
 int main()
{
	caythongnoel(20);
	getch();
	return 1;

}