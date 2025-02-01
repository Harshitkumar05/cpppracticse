// //Problem 1: Car Class
// Problem Statement:
// Create a class Car with the following attributes:

// brand (string)
// model (string)
// year (int)
// Implement a method displayDetails() that prints the car details. In main(), create an object of Car, initialize its values, and call displayDetails().
// #include<iostream>
// using namespace std;
// class Car{
//     public:
//     string brand;
//     string model;
//     int year;
//      void DisplayDetails(string b,string m,int y){
//         b=brand;
//         m=model;
//         y=year;
//         cout<<"the brand is :"<<b<<"and model is :"<<m<<"the year of model of is "<<y;
//     }


// };
// int main(){
//     int a;
//     string b,c;
//     cin>>a>>b>>c;
//     cout<<a<<b<<c;
//     Car c1;
//     c1.DisplayDetails(b,c,a);


// }

// calculate factorial uisng recursion
// #include<bits/stdc++.h>
// using namespace std;
// int fact(int n){
//     if(n==0)return 1;
//     else return n*fact(n-1);
// };
// int main(){
//     int n;
//     cin>>n;
//     cout<<fact(n);
// }
// sum of first natural number 
// #include<bits/stdc++.h>
// using namespace std;
// int sum(int n){
//     if(n==0)return 0;
//     else return n+sum(n-1);
// };
// int main(){  
//     int n;
//     cin>>n;
//     cout<<sum(n);
// }

// 1 2 3 4 5 
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0)return ;
    
//     print(n-1);
//     cout<<n<<" ";
// };
// int main(){  
//     int n;
//     cin>>n;
//     print(n);
// }


// #include<iostream>
// using namespace std;
// void odd(int n);
// void even(int n){
//     if(n>10)return ;
//     cout<<n<<" ";
//     odd(n-1);

// }
// void odd(int n){
//     if(n>10)return ;
//     cout<<n<<" ";
//     even(n+3);
// }
// int main(){
//     even(2);
// }

// #include<iostream>
// using namespace std;
// class A{
//     int x=1,y=2,z=3;// here variable intialize private
//     public:
//     int check(int p,int q,int r){
//         x=p;
//         y=q;
//         z=r;
//         return(x+y+z);
//     }
// };
// int main(){
//     A obj;
//     int a=10,b=20,c=30;
//     cout<<obj.check(a,b,c);
// }
// #include<iostream>
// using namespace std;
// class vijay{
//     public:
//     void check(int x,int y,int z){
//         cout<<(x+y+z);
//     }
// };
// int main(){
//     vijay obj;
//     int x=10,y=25,z=30;
//     obj.check(x,y,z);
// }


// #include<iostream>
// using namespace std;
// int fib(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     return fib(n-1)+fib(n-2);

// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cout<<fib(i)<<" ";
//     }
//     return 0;

// }



// #include <iostream>
// using namespace std;

// int fibonacci(int n) {
//     if (n == 0) return 0;
//     if (n == 1) return 1;
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main() {
//     int n;
//     cin >> n;
//     cout << fibonacci(n);
//     return 0;
// }


// inheritance 

// #include<iostream>
// using namespace std;
// class A{
//     public :
//     void multiply(int a,int b){
//         int c=a*b;
//         cout<<c<<endl;
//     }
//     void divide(int a,int b){
//         int c=a/b;
//         cout<<c<<endl;
//     }
//     void add(int a,int b){
//         int c=a+b;
//         cout<<c<<endl;
//     }
//     void sub(int a,int b){
//         int c=a-b;
//         cout<<c<<endl;
//     }
// };
// int main(){
//     int a,b;
//     cin>>a>>b;
//     A a1;
//     a1.add(a,b);
//     a1.multiply(a,b);
//     a1.divide(a,b);
//     a1.sub(a,b);

// }

// Enacaputalation

#include<iostream>
using namespace std;
class BankAccout{
    int BankACnumber;
    double Balance;
    public:
    BankAccout(int acN,double intialbalance){
        BankACnumber=acN;
        Balance=(intialbalance>=0)? intialbalance:0;
    }
    void deposit(double amount){
        if(amount>0){
            Balance+=amount;
            cout<<"the deposit of amount is:"<<amount<<endl;
            cout<<"the Balance is :"<<Balance;
        }else{
            cout<<"the depo"
        }

    }


}
