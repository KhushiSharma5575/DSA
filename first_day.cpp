// #include<iostream>
// using namespace std;
// int main(){
//     int oddSum=0;
//     int evenSum=0;
//     while(n>0){
//        int rem=n%10;
//        if(rem%2==0){

//        }
//     }
// }

//number is a palindrome

#include <iostream>  
using namespace std;  
int main()  
{  
  int n,r,sum=0,temp;    
  cout<<"Enter the Number=";    
  cin>>n;    
 temp=n;    
 while(n>0)    
{    
 r=n%10;    
 sum=(sum*10)+r;    
 n=n/10;    
}    
if(temp==sum)    
cout<<"Number is Palindrome.";    
else    
cout<<"Number is not Palindrome.";   
  return 0;  
} 