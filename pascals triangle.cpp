/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int fact(int x){
    int factorial=1;
    for(int i=2;i<=x;i++){
        factorial=factorial*i;
    }
    return factorial;
}
int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
       for(int j=0;j<=i;j++){
           cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
       }cout<<endl;
   }

    return 0;
}
