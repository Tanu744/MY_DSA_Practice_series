//Find second largest element in the array

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

//Brute force approch 
// int main(){

//   int n;
//   cin>>n;
//   int arr[n];

//   for(int i =0;i<n;i++)
//   {
//     cin>>arr[i];
//   }
  
//   int smallest=arr[0];
//   for(int i=1;i<n;i++)
//   {
//     if(arr[i]<smallest)
//     smallest=arr[i];
  
//   }
//   int ssmallest=INT_MAX;
//   for(int i=0;i<n;i++)
//   {
//     if(arr[i]<ssmallest  && arr[i]!=smallest)
//     {
//       ssmallest=arr[i];
//     }
//   }
//   cout<<"Second smallest element of array is ="<<ssmallest;

  //Complexity of this code will be O(2N)
// }

// Optimal approch 

int findSecondSmallest(int n,vector<int>arr)
{
   int smlst=arr[0];
   int ssmlst=INT_MAX;
   for(int i=1;i<n;i++)
  {
    if(arr[i]<smlst)
    {
     ssmlst=smlst;
     smlst=arr[i];
    }
    else if( arr[i]>smlst && arr[i]<ssmlst)
    {
      ssmlst=arr[i];
    }
  }
   return ssmlst;
}

int getscndSmallest(int n,vector<int>arr)
{
  int secondSmallest=findSecondSmallest(n,arr);
  return secondSmallest;
}

int main()
{
  int n;
  cout<<"Enter the size of array";
  cin>>n;
  cout<<"Enter the elements of array";
  vector<int>arr(n);

  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Second largest element = "<<getscndSmallest(n,arr);
  return 0;
  //time complexity will be O(N)

}
