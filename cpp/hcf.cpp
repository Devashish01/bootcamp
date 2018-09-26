#include <iostream>
using namespace std;
void hcff(int arr[],int n)
{
int n1=arr[0];
int n2=arr[1];
while(n1 != n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }

    cout << "HCF = " << n1;

}
int main(int argc,char **argv)
{
      int arr[100];
int n=argc-1;
for(int i=0;i<n;i++)
{
arr[i]=(atoi)(argv[i+1]);

}
 hcff(arr,n);
    
    
    return 0;
}


