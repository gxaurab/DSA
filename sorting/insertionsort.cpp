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

    for(int i=1;i<n-1;i++){
        int temp = arr[i];
            int j = i-1;
            while(j>=0 && arr[j]>temp){
                int temp1= temp;
                temp = arr[j];
                arr[j] = temp1;
            }
            arr[j+1] =temp ;
    }
     cout<<"Sorted array is "<<endl;
     for(int i =0; i<n;i++){
        cout<<arr[i]<<endl;
     }
   

 return 0;
 }