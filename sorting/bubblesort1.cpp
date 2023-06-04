#include <iostream>
using namespace std;
 int main(){
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cout<<"Enter the element in the "<<i+1<<"place"<<endl;
        cin>>arr[i];
    }
        for(int i=0;i<n-1;i++){
            for(int j =0; j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp= arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
  
    cout<<"Sorted array is "<<endl;
     for(int i =0; i<n;i++){
        cout<<arr[i]<<endl;
     }
    return 0;
 
 }