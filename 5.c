#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
int i,n;
void append(int *arr,int ele,int i,int n)
{

 
 if(i+1==n)
 {
 	n=n*2;
 	arr=(int *)realloc(arr,sizeof(int)*n);
 }
 arr[++i]=ele;

}
int member(int *arr,int ele,int i)
{
	for(int j=0;j<i;j++)
		if(ele==arr[j])
			return 1;
		else
			continue;
		return 0;
}
int length()
{
	return i;
}
void concatenate(int *arr,int* brr)
{
	n=2*n;
	arr=(int *)realloc(arr,sizeof(int)*n);
	for(int j=0;j<2*n;j++)
	{
		arr[i+j+1]=brr[j];
	}



}
void slice(int *arr,int a,int b)
{
	for(int j=a-1;j<b;j++)
		printf("%d ",arr[j]);

}
int main()
{
	int n;
	int *arr,*brr;
	int i;
	printf("enter size of array\n");
	scanf("%d",&n);
	int x,key,ele;
	printf("enter no of element\n");
	scanf("%d",&x);
	arr=(int *)malloc(sizeof(int)*x);
	printf("enter the elements\n");
	for(i=0;i<x;i++)
	{	
		scanf("%d",&ele);
		
		arr[i]=ele;
		i++;
	}
	append(arr,4,i,n);
	printf("enter elements in brr\n");
	scanf("%d",key);
	printf("enter elements brr");
	for(int j=0;j<key;j++)
		scanf("%d",&brr[i]);

	concatenate(arr,brr);
	int key1;
	printf("enter key\n");
	scanf("%d",&key1);
	int t=member(arr,key1,i);
	printf("%d\n",t);
	//slice(arr,3,4);
}




/*int main()
{
	int arr[100];
	FILE *fs;
	fs=fopen("input.txt","r");
	FILE *ft=fopen("output.txt","w");
	char ch,ch1,ch2,s1,s2;
	int d,i;
	while(1)
	{
		
		ch=getc(fs);
		if(ch=='a')
		{
			i=0;
			s1=getc(fs);
			ch1=getc(fs);
			
			while(1)
			{
				fscanf(fs,"%c",&ch2);
				if(isdigit(ch2))
				{
					arr[i]=(int)(ch2);
					i++;
				}
				else if(ch2==')')
					break;
						
			}
			s2=getc(fs);
			fscanf(fs,"%d",&d);
		}
		else if(ch=='x')
			break;
			
	}
	for(int j=0;j<i;j++)
		fprintf(ft,"%d ",arr[i]);
	
}*/
