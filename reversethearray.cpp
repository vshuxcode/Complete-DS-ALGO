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

  cout<<"-------------- Reverse Array -------"<<endl;

   int first = 0;
   int end = n-1;

   while(first < end) {
    int item = arr[first];
    arr[first] = arr[end];
    arr[end] = item;
    first++;
    end--;

   }

   for(int i=0;i<n;i++){
    cout<<arr[i ]<<endl;
   }



}
