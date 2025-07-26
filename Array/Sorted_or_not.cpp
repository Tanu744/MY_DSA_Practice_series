#include<iostream>
#include<vector>

using namespace std;

bool check(int n,vector<int>arr)
{
 int count=0;
 for(int i=0;i<n;i++)
 {
  if(arr[i]>arr[i+1] % n){
    count++;
  }
}
if(count>1){
 return false;
}
else 
 return true;
}

int main(){
  int n;
  cout<<"Enter the size of array";

cin>>n;
vector<int>arr(n);

for(int i=0;i<n;i++)
{
  cin>>arr[i];
}
bool ans=check(n,arr);
cout<<ans;
return 0;
}