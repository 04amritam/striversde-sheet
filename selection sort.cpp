/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int arr[5]={12,34,23,42,11};
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            if(arr[i]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;} 
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}