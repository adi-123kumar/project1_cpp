#include <math.h>
namespace myPackage{
    class MyIntegerMath{
        public:
       int countDigits(int num);
       bool isArmstrong(int num);
    };
    int MyIntegerMath :: countDigits(int num){
        int temp=num,count=0;
        while(temp>0){
         temp%10;
         count++;
         temp=temp/10;
        }
        return count;
    }
    bool MyIntegerMath :: isArmstrong(int num){
        int temp1=num;
        int r;
        int count=0;
        while(temp1>0){
            r=temp1%10;
            count+=pow(r,countDigits(num));
            temp1=temp1/10;
        }
        if(num==count){
            return true;
        }
        else{
            return false;
        }
    }

 class MyFirstClass
 {
    public:
    int factorial(int num);
    bool isStrong(int num);
 };
  int MyFirstClass ::factorial(int num)
 {
    int temp = num;
    int factorial = 1;
    if (temp > 0)
    {
        while (temp > 0)
        {
            factorial = factorial * temp;
            temp--;
        }
        return factorial;
    }
    else
    {
        return -1;
    }
 }
 bool MyFirstClass ::isStrong(int num)
 {
    int temp = num, r;
    int count = 0;
    while (temp > 0)
    {
        r = temp % 10;
        count = count + factorial(r);
        temp = temp / 10;
    }
    if (num == count)
    {
        return true;
    }
    else
    {
        return false;
    }
 }
}