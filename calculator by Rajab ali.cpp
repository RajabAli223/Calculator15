 #include<iostream>
using namespace std;
int main()
{
 while(true)
{
 int a,b;
 char x;
 cout<<"Enter your the first value:";
 cin>>a;
 cout<<"Enter your the second value:";
 cin>>b;
 cout<<"Enter your operator";
 cin>>x;
if(x=='+')
cout<<"addition is="<<a+b<<endl;
 else if (x=='-')
cout<<"subtract ="<<a-b<<endl;
 else if (x=='*')
cout<<"multiplication is ="<<a*b<<endl;
 else if (x=='/')
cout<<"division is ="<<a/b<<endl;
 else if (x=='%')
cout<<"percentage is="<<a%b<<endl;
 else
cout<<"wronge input"<<endl;
 break;
 }
 return 0;
}