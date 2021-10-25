#include<bits/stdc++.h>

using namespace std;

void bubbleSort(int a[],int n){
    int k = 0;
    int swap_count = 0;
    for(k=0;k<n;k++){
        for(int i=0;i<n-k-1;i++){
            if(a[i]>a[i+1])
            {
                swap_count++;
                swap(a[i+1],a[i]);
               
            }
        } 
    }
    
    cout<<"Max no of swaps  : "<< swap_count <<endl;
}
int main(){
    int n;
    cout<<"Enter the size of integer array : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubbleSort(a,n);
    cout<<"\nSorted array : \n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
