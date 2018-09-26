#include <iostream>
using namespace std;
void lcmm(int arr[],int n)
{
int num1=arr[0];
int num2=arr[1];
int maxValue = (num1 > num2) ? num1 : num2;

   while(1)
   {
     
      if((maxValue % num1 == 0) && (maxValue % num2 == 0))
      {
         cout << "LCM: " << maxValue << endl;
         break;
      }
      ++maxValue;
   }

}
int main(int argc, char **argv)
{
   int arr[100];
int n=argc-1;
for(int i=0;i<n;i++)
{
arr[i]=(atoi)(argv[i+1]);

}
 lcmm(arr,n);
   return 0;
}

