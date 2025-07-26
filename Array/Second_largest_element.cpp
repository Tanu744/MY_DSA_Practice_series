//Find second largest element in the array

#include<iostream>
#include<vector>

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
  
//   int largest=arr[0];
//   for(int i=1;i<n;i++)
//   {
//     if(arr[i]>largest)
//     largest=arr[i];
  
//   }
//   int slargest=-1;
//   for(int i=0;i<n;i++)
//   {
//     if(arr[i]>slargest && arr[i]!=largest)
//     {
//       slargest=arr[i];
//     }
//   }
//   cout<<"Second largest element of array is ="<<slargest;

// }
//Complexity of this code will be O(2N)

//Optimal approch 
int findSecondLargest(int n,vector<int>arr)
{
   int lrgst=arr[0];
   int slrgst=-1;
   for(int i=1;i<n;i++)
  {
    if(arr[i]>lrgst)
    {
     slrgst=lrgst;
     lrgst=arr[i];
    }
    else if( arr[i]<lrgst && arr[i]>slrgst)
    {
      slrgst=arr[i];
    }
  }
   return slrgst;
}

int getscndlrgst(int n,vector<int>arr)
{
  int secondLargest=findSecondLargest(n,arr);
  return secondLargest;
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
  cout<<"Second largest element = "<<getscndlrgst(n,arr);
  return 0;

}
