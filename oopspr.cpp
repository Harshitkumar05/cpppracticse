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


#include<iostream>
using namespace std;
void odd(int n);
void even(int n){
    if(n>10)return ;
    cout<<n<<" ";
    odd(n-1);

}
void odd(int n){
    if(n>10)return ;
    cout<<n<<" ";
    even(n+3);
}
int main(){
    even(2);
}