//Remove duplicate from arra the return the size of array

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//Brute force approch 

// int checkSize(vector<int>arr,int n)
// {
//   if(n==0)return 0;
//   int k=1;
//   for(int i=1;i<n;i++){
//     if(arr[i]!=arr[i-1]){
//       arr[k++]=arr[i];
//     }
//   }
//   cout<<k;

// }

// int main()
// {
//   int n;
//   cout<<"Enter the size of array ";
//   cin>>n;
//   vector<int> arr(n);
//   for(int i=0;i<n;i++)
//   {
//     cin>>arr[i];
//   }  
//   int ans;
//   cout<<"Size of the Distinct element array = ";
//   checkSize(arr,n);
//   return 0;
  
//The Time complexity of the code is O(N) and the space Complexity is O(N) in worst case
// }

//Optimal Approch Using two pointer concept

int checkSize(vector<int>arr,int n)
{
int i=0;
for(int j=1;j<n;j++)
{
  if(arr[i]!=arr[j]){
    arr[i+1]=arr[j];
    i++;
  }
}
return i+1;
}

int main()
{
  int n;
  cout<<"Enter the size of array ";
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }  
  int ans=checkSize(arr,n);
  cout<<"Size of the Distinct element array = "<<ans;
  return 0;

  //time complexity of the code is O(N)and space complexity of code id O(1);
}


