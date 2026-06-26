#include <iostream>
#include<string>
using namespace std;
           //defining a new function
int add(int a, int b)
{
     int c;
     c = a +b;
     return c;
}
 //defining employee class
class Employee{
     public:
     string name;
     int salary;
     //using constructor
      Employee(string n,int s)
            {this->name = n;

          
          this ->salary =s;
     }
     void printdetails()
     {
          cout<<"the name of our employee is "<<this->name<<" and his salary "
          <<this->salary<<" dolars"<<endl;
     }
};

int main() {
//cout << "Hello, World!" << std::endl;

              //data types
 //int a,b,c;
   // short S=9;
    //cout <<S <<endl;
    
                //camel case notation
// int marksInmaths =83;
 //cout<<marksInmaths<<endl;

              //using float dtype

//float score =83.5;
//double score2= 66.99;
//score=55.9;
//cout<<score<<endl;
     //taking input from the users
// int a,b;
// cout<<"enter first number"<<endl;
// cin>>a;
// cout<<"enter second number"<<endl;
// cin>>b;
//       //using operators
// cout<<"the sum of both the numbers "<< a +b <<endl;
// cout<<"the multiply of both the numbers "<< a *b <<endl;
//                                             //typecast
// cout<<"the division of both the numbers "<< (float)a /b <<endl;

               //using if else,else if
// int age;
// cout<<"Entere your age"<<endl;
// cin>>age;
// if(age>=18){
//     cout<<"you can vote";
// }
// else if(age>150)
// {cout<<"invalid age";
// }
// else{
//     cout<<"you cannot vote";
// }
// int age;
// cout<<"entere your age";
// cin>>age;

// switch (age)
// {
// case 12:
//      cout<<"you are 12 years old";
//      break;
// case 18:
// cout<<"you are 18 years old";
// default:
// cout<<"niether 12 or 18";
//      break;
// }



                  //loops
                  //1.while loop
//int index = 0;
// while(index<34)
// {
//      cout<<"we are at index nu,ber"<<index<<endl;
//      index = index +1;
// }

               //do while loop
// do{
//      cout<<"we are at index nu,ber"<<index<<endl;
//      index = index +1;

// }while(index>242536);
 
             //for loop
// for(int i =0;i<34;i++)
// {
//      cout<<"the valure of i is"<<i<<endl;
// }
           //the new function defined add
// int a,b;
// cout<<"entere the first no"<<endl;
// cin>>a;
// cout<<"entere the second no"<<endl;
// cin>>b;
// cout<<"the function returned"<<add(a,b);
               

                     //arrays
// int arr[3]= {1,2,3};
// cout<<arr[2];
           //using for loop to store elements in the array
// int marks[6];

// for(int i ; i<6; i++)
// {
//      cout<<"entere the marks "<<i<<"the student"<<endl;
//      cin>> marks[i];
// }
     //convert d types
// int a =343;
// cout<<(float)a/34;

                  //string function
// string name = "harry";
// cout<<"the name is"<<name<<endl;
// cout<<"the length of the name is "<<name.length()<<endl;
// cout<<"the name is "<<name.substr(0,3)<<endl;

                       //using pointer
// int a = 34;
// int* ptra;
// ptra =&a;
// cout<<"the value of  a is "<<a<<endl;
// cout<< "the the value of  a is "<<*ptra<<endl;
// cout<<"the address of a is "<<ptra<<endl;

Employee har("Lakshya",344);
har.printdetails();


return 0;
}