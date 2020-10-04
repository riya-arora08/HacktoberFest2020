//program to check if a number is palindrome
//A palindromic number is a number that remains the same when its digits are reversed.
#include <iostream>  
using namespace std;  
int main()  
{  
  int n,r,sum=0,temp;    
  cout<<"Enter the Number = ";    
  cin>>n;    
 temp=n;    
 for( ; n>0 ; n=n/10)    
{    
 r=n%10;    
 sum=(sum*10)+r;
}    
if(temp==sum)    
cout<<"Number is Palindrome.";    
else    
cout<<"Number is not Palindrome.";   
  return 0;  
}      
