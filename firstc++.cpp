// #include<iostream>
// using namespace std;
// int main(){
//     // cout<< "Hello world"<<endl<<"hello cw"<<endl;
//     // cout<<4+3;
//     // cout<<"their is for us ";
//     int x;
//     int y;
//     int sum;
//     x=4;
//     y=5;
//     //sum =x+y;
//     x=20;
//     y=30;
//     sum =x+y;
//     sum=sum+25;
//     cout<<"the sum is "<<sum;
//}
// #include<iostream>
// using namespace std;
// int main(){
//     int x ;

    
//     cin>>x;
//     cout<<x;
  
// }
// write for multiple input 
// #include <iostream>
// using namespace std;
// int main(){
//     int age;
//     string name;
//     cin>>age>>name;
//     cout<<"the name is :"<<name<<endl;
//     cout<<"the age is : "<<age<<endl;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout<<"enter first number \n";
//     cin>>x;
//     cout<<"enter second number \n";
//     cin>>y;
//     int sum=x+y;
//     cout<<"the sum of number ="<<sum;
// }
// binary search is always sorted and and find mid value 


// #include<bits/stdc++.h>>
// using namespace std;
// int main(){
//     int arr[]={3,7,9,12,13,17,18,21,34};
//     int key;
//     int low=0;
//     int high=key-1;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(arr[mid])==key){
//             mid=mid+1;
//         }else{
//             high=mid-1;
//         }
//     }
//     cout<<key;

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,key;
//     cin>>n;
//     int arr[n],low=0,high=n-1;
//     for(int &i:arr)cin>>i;
//     cin>>key;
//     while(low<=high){
//         int mid=(low-high)/2;
//         if(arr[mid==key]){
//             cout<<"element present at index"<<mid;
//             return 0;
//         }
//         if(arr[mid]<key)low=mid+1;
//         else high=mid-1;
//     }
//     cout<<"element not found";
// }
//class and objects 
// class -user define data
//objects- instance of class

// #include<bits/stdc++.h>
// using namespace std;
// class vijay{
//     public:
//     int x;
//     float y;
//     string s;
//     vijay(){
//         cout<<"how are you brother";
//     }
// };
// int main(){
//     vijay v;
//     v.x=2;
//     v.y=4.67; 
//     v.s="anuj";
//     cout<<v.x<<" "<<v.y<<" "<<v.s;
    
// }
// Online C++ compiler to run C++ program online
//constructor- special type of fun where class name is same as name of class 
// consturctor do not have any return type 
// consturctor is call when object is created then call our function or consturctor
// #include <iostream>
// using namespace std;

// int main() {
//     double num1, num2;
//     char operation;

//     cout << "Welcome to the Calculator!" << endl;
//     cout << "Enter first number: ";
//     cin >> num1;

//     cout << "Enter an operator (+, -, *, /): ";
//     cin >> operation;

//     cout << "Enter second number: ";
//     cin >> num2;25

//     switch (operation) {
//         case '+':
//             cout << "Result: " << num1 + num2 << endl;
//             break;

//         case '-':
//             cout << "Result: " << num1 - num2 << endl;
//             break;

//         case '*':
//             cout << "Result: " << num1 * num2 << endl;
//             break;

//         case '/':
//             if (num2 != 0) {
//                 cout << "Result: " << num1 / num2 << endl;
//             } else {
//                 cout << "Error: Division by zero is not allowed." << endl;
//             }
//             break;

//         default:
//             cout << "Error: Invalid operator!" << endl;
//     }

//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// class myhome{
//     public:
//     int x;
//     myhome(){
//         cout<<"constructor called"<<endl;
//     }
//     ~myhome(){
//         cout<<"destructor called"<<endl;
//     }
// };
// int main(){
//     myhome vijay;
//     vijay.x=5;
//     cout<<vijay.x<<endl;
//     myhome ajay;
//     ajay.x=45;
//     cout<<ajay.x<<endl;
//     //destructor is called in last 
// }

// #include<iostream>
// using namespace std;
// class Student{
//     public:
//     int rollno;
//     float cgpa;
//     string name;

// };
// void prnt(Student s){
    
//     cout<<s.name<<" "<<s.cgpa<<" "<<s.rollno<<endl;
// }

// int main(){
//     Student s1;
//     s1.name="Harshit";
//     s1.rollno=45;
//     s1.cgpa=6.5;

//     Student s2;
//     s2.name= "Raman";
//     s2.rollno=25;
//     s2.cgpa=5.7;

//     Student s3;
//     s3.name ="yogender";
//     s3.rollno=56;
//     s3.cgpa=6.4;
//     //cout<<s1.name<<s1.rollno<<s1.cgpa;
//     prnt(s1);
//     prnt(s2);
//     prnt(s3);

// }

/*#include<iostream>
using namespace std;
class Student{
    public :
    string name;
    int rollno;
    float gpa;
    Student(string s,int r,int g ){
        name=s;
        rollno=r;
        gpa=g;
    }
    };
Student s1("Harshit",45,6.5);*/
// Default constructor 
/*#include<iostream>
using namespace std;
class Harshit{
    public:
    int age;
    string name;
    Harshit(){
        cout<<"harshit is calling";
    }
    
};
int main(){
    Harshit h;
    h.age=45;
    h.name="Alok";
    cout<<h.age<<" "<<h.name;
}*/
#include<iostream>
using namespace std;
class vijay{
    public:
    int x;
    //int n;
    vijay(){
        cout<<"default constructor";
    }
    vijay(int n){// parameterised constructor
        x=n;
        cout<<"parameterise constructor";
    

    }
    ~vijay(){// destructor  
        cout<<"destructor"<<endl;
    }
};
int main(){
    vijay v1(243);// parameterised
    vijay v3(v1);// copy constructor
    cout<<v3.x<<endl;
    cout<<v1.x<<endl;

 
    vijay v2;// default constructor

}