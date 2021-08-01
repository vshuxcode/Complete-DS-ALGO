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

  sort(arr,arr+n);

  int k;
  cout<< "Enter the number"<<endl;
  cin>>k;

  cout<<arr[k]<<endl;
}
