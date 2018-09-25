#include<stdio.h>
#include<stdlib.h>

void rotate(int arr[],int n)
{
int x=arr[n-1];
for(int i=n-2;i>=0;i--)
{
arr[i+1]=arr[i];

}
arr[0]=x;

}
void print(int arr[],int n)
{
for(int i=0;i<n;i++)
printf("%d ",arr[i]);
}
int main(int argc, char **argv)
{
int arr[100];
//int arr[]={1,2,3,4,5};
int n=argc-1;//=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++)
{
arr[i]=(atoi)(argv[i+1]);

}
rotate(arr,n);
print(arr,n);
}
