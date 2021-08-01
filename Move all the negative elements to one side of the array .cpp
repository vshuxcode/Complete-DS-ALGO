#include <bits/stdc++.h>

using namespace std;

int main() {

int n;
 cout<<"Enter the size of array"<<endl;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }

 int i = -1;
 int pivot = 0;

 for(int j=0;j<n;j++){

    if(arr[j]<0){
        i++;
        swap(arr[i],arr[j]);
    }

 }

 for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;

 }




}

