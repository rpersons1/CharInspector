//Author:
#include<iostream>

using namespace std;

int main()
{
char one; 
  
  cout<<"What character do you want to know about?\n";
  cin>>one;
  //when user's entry is between A-Z...
  if(one>='A' && one<='Z')
  {
  cout<<one<<" is an upper case letter!\n";
  }
  else if(one>='a' && one <='z')
  {
  //when user's entry is between a-z...  
  cout<<one<<" is a lower case letter!\n";
  }
  else
  {
  //in all other cases...
  cout<<one<<"$?! Pssh. What are you talking about?\n";
  }
  //no matter what they enter...
  cout<<"The ASCII value is: "<<(int) one<<endl;

  return 0;
}
