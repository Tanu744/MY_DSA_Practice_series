//Find largest element in the array

#include<iostream>
 using namespace std;

//Brute force Approch

 int main()
 {

  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int max=arr[0];
  for(int i=1;i<n;i++){
    if(arr[i]>max){
      max=arr[i];
    }
  }
  cout<<"Maximum No. in the array is ="<<max;
  return 0;

 }