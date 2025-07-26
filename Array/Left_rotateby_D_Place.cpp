#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
// void leftRotate(int n,vector<int>&arr,int d){
//   int temp[d];
//   for(int i=0;i<d;i++)
//   {
//     temp[i]=arr[i];
//   }
//   for(int i=d;i<n;i++)
//   {
//     arr[i-d]=arr[i];
//   }
//   int j=0;
//   for(int i=n-d;i<n;i++)
//   {
//    arr[i]=temp[j];
//    j++;
//   }

// }

// int main()
// {
//   int n;
//   cout<<"Enter the size of the array ";
//   cin>>n;
//    vector<int>arr(n);
//    for(int i=0;i<n;i++)
//    {
//     cin>>arr[i];
//    }
//    int d;
//    cout<<"enter the d place ";
//    cin>>d;
//    leftRotate(n,arr,d);
//    for(int i=0;i<n;i++)
//    {
//     cout<<arr[i]<<" ";
//    }
//    return 0;
// }

//Better Approch

// void leftRotate(int n,vector<int>&arr,int d){
//   d=d%n;
//   int temp[d];
//   for(int i=0;i<d;i++)
//   {
//     temp[i]=arr[i];
//   }
//   for(int i=d;i<n;i++)
//   {
//     arr[i-d]=arr[i];
//   }
//   for(int i=n-d;i<n;i++)
//   {
//    arr[i]=temp[i-(n-d)];
//   }

// }

// int main()
// {
//   int n;
//   cout<<"Enter the size of the array ";
//   cin>>n;
//    vector<int>arr(n);
//    for(int i=0;i<n;i++)
//    {
//     cin>>arr[i];
//    }
//    int d;
//    cout<<"enter the d place ";
//    cin>>d;
//    leftRotate(n,arr,d);
//    for(int i=0;i<n;i++)
//    {
//     cout<<arr[i]<<" ";
//    }
//    return 0;
// }


//Using inbuilt libraries

int main()
{
  int n;
  cout<<"Enter the size of the array ";
  cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   int d;
   cout<<"enter the d place ";
   cin>>d;
   reverse(arr,arr+d);
      reverse(arr+d,arr+n);
         reverse(arr,arr+n);
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
   return 0;
}

