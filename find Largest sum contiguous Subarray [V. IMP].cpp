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

   int maxer = 0,miner =0;
   for(int i=0;i<n;i++){
      if(arr[i]>miner)
        maxer = arr[i];
      if(maxer > 0){
        maxer = maxer + arr[i];
      }




   }

   cout<<maxer<<endl;







}
