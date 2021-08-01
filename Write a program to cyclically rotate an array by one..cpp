#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cout<<"Enter the size"<<endl;
cin>>n;
int arr[n];

cout<<"Enter the elements"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int pivot = arr[n-1];
int j=1;
int i =0;

for(int i =n-1;i>0;i--){
    arr[i] = arr[i-1];
}



arr[0] = pivot;


for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;





}
