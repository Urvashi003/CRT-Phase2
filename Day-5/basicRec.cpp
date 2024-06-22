#include<iostream>
using namespace std;

// void f(int n){
//     if(n==0) return;
//     cout<<n<<" ";
//     f(n-1);
//     cout<<n<<" ";
// }

// int main(){
//    f(3);
// }

// void f(int n){
//     if(n==0) return;
//     f(n-1);
//     cout<<n<<" ";
//     f(n-1);
// }
// int main(){
//     f(3);
// }

//print n to 1

// void f(int n){
//     //bc
//    if(n==0) return;
//     cout<<n<<" ";
//     f(n-1);
// }
// int main(){
//     f(5);
// }

//print 1 to n
// void f(int n){
//     //bc
//     if(n==0) return;
//     f(n-1);
//     cout<<n<<" ";
// }
// int main(){
//     f(7);
// }

//factorial

// int fact(int n){
//     if(n==0) return 1;
//     return n*fact(n-1);
// }
// int main(){
//     cout<< fact(4);
    
// }

// 0 1 1 2 3 5 8 13....
// int fibo(int n){
//     if(n==0) return 0;
//     if(n==1) return 1;
//     return fibo(n-1)+fibo(n-2);
// }
// int main(){
//     cout<<fibo(5);
    
// }

//sum of digits
int Sum(int n){
    if(n==0) return 0;
    return n%10 + Sum(n/10);
}
int main(){
    cout<< Sum(123);
}
