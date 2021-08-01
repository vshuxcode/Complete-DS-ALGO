#include <bits/stdc++.h>
using namespace std;

int main() {
int n,m;
cout<<"Enter the first large size"<<endl;
cin>>n;
int arrl[n];

cout<<"Enter the second small  size"<<endl;
cin>>m;


int arrS[m];
cout<<"Enter the elements for first small Union array"<<endl;
for(int i=0;i<n;i++){
    cin>>arrl[i];

}

cout<<"Enter the elements for second large array"<<endl;
for(int i=0;i<m;i++){
    cin>>arrS[i];
}




cout<<"---------------Union----------"<<endl;

for(int i=0;i<n;i++) {
    cout<<arrl[i]<<endl;

}


    for(int j=0;j<m;j++){
 int flag = 0;

    for(int i=0;i<n;i++){
        if(arrl[i] == arrS[j]){
            flag = 1;
            break;
        }
    }



    if(flag!=1){
        cout<<arrS[j]<<endl;
    }

}

}
