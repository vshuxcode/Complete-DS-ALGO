#include <bits/stdc++.h>

using namespace std;

int main() {
int n;
  cout<<"Enter the an array"<<endl;
  cin>>n;
  int arr[n];
  cout<<"Enter the elements"<<endl;
  for(int i=0;i<n;i++)
    cin>>arr[i];

  int c0=0,c1=0,c2=0;

  for(int i=0;i<n;i++){
    if(arr[i]==0)c0++;
    else if(arr[i]==1)c1++;
    else c2++;

  }

  int k=0;
  for(int i=0;i<c0;i++)arr[k++]=0;
  for(int i=0;i<c1;i++)arr[k++]=1;
  for(int i=0;i<c2;i++)arr[k++]=2;

  for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
  }

}
