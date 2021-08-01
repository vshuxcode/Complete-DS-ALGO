#include <bits/stdc++.h>
using namespace std;

int main() {


  int n;
  cout<<"Enter the an array"<<endl;
  cin>>n;
  int arr[n];
  cout<<"Enter the elements"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  for(int i=0;i<n;i++){

    for(int j=i+1;j<n;j++){
    if(arr[i]> arr[j]) {
     swap(arr[i],arr[j]);
    }
    }
  }

  cout<<arr[0]<<endl;
  cout<<arr[n-1]<<endl;



}
