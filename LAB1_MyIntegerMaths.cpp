#include<iostream>
#include "LAB1_MyIntegerMaths.h"
using namespace std;
using namespace myPackage;
int main(){
MyIntegerMath cnt;
MyFirstClass cnt2;
    int choice,item;
do{
cout<<"please select what do you want to check or calculate :"<<endl<<"1.Factorial\n"<<"2.isStrong\n"<<"3.countDigits\n"<<"4.isArmstrong\n";
cin>>item;
switch(item){
case 1:
   int num1;
   cout<<"Enter the number that you want for factorial \n";
   cin>>num1;
   cout<<"The factorial of the "<<num1<<" is: "<<cnt2.factorial(num1)<<endl;
   break;
case 2:
   int num2;
   cout<<"Enter the number to check for Strong Number\n";
   cin>>num2;
   cout<<cnt2.isStrong(num2);
   break;
case 3:
   int num3;
   cout<<"Enter the number to count the number of digits\n";
   cin>>num3;
   cout<<"The number of digits in the number is:"<<cnt.countDigits(num3)<<endl;
   break;
case 4:
   int num4;
   cout<<"Enter the number to check for Armstrong Number \n";
   cin>>num4;
   cout<<cnt.isArmstrong(num4)<<endl;
   break;
default:
    cout<<"Please Enter a valid number\n";
    break;
}
cout<<"press 0 to go to the main menu\n";
cin>>choice;
}while(choice==0);



   
//    cout<<cnt.isArmstrong(153)<<endl;
//    cout<<cnt.countDigits(153)<<endl;
//    cout<<cnt2.factorial(5)<<endl;
//    cout<<cnt2.isStrong(145)<<endl;

return 0;
}