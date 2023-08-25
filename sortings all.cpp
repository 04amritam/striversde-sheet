/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void swap(int *a,int *b){
    int temp=*b;
    *b=*a;
    *a=temp;
}
void selectionsort(int arr[],int n){//time complexity:O(n^2)
    for(int i=0;i<n;i++){
        int index=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        swap(&arr[i],&arr[index]);
    }
}
void bubblesort(int arr[],int n){//time complexity best:O(n) worst and avg:O(n^2)
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
               int temp=arr[j+1];
               arr[j+1]=arr[j];
               arr[j]=temp;
            }
        }
    }
}
void insertionsort(int arr[],int n){ //time complexity:O(N^2)
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j] ){
            swap(&arr[j-1],&arr[j]);
            j--;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
//   selectionsort(arr,n);
//   bubblesort(arr,n);
insertionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}