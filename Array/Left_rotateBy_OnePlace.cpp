#include<iostream>

using namespace std ;

int main(){
  int n;
  cout<<"Enter thr size of array ";
  cin>>n;
  int arr[n];
  for (int i=0;i<n;i++)
  {
    cin>>arr[i];

  }
  int temp=arr[0];
  for(int i=1;i<n;i++)
  {
    arr[i-1]=arr[i];

  }
  arr[n-1]=temp;
  for (int i=0;i<n;i++)
  {
    cout<<arr[i];

  }
  return 0;
  //time complexity is O(N)
         
} 