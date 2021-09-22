#include <iostream>
using namespace std;
class stack{
  int arr[5];
  int tos=-1;
public:
  void push(int x)
  {
  
    if(tos==4)
    {
      cout<<"Stack overflow"<<endl;
      return;
    }
      tos=tos+1;
    arr[tos]=x;
    cout<<"successfully Pushed :"<<x<<endl;
    return;
  }
  int pop()
  { int x;
    if(tos==-1)
    {
      cout<<"Stack underflow"<<endl;
      return -1;
    }
    x=arr[tos];
    tos--;
    cout<<"Successfully popped out:"<<x<<endl;
    return x;

  }

};

int main()
{
  stack s;
  int choice ;
  do{
    cout<<"1.push\n2.pop\n3.exit\n";
    cin>>choice;
    switch(choice)
    {
      case 1:
           int x;
           cout<<"Enter element u wanna push in stack:";
           cin>>x;
           s.push(x);
           break;
      case 2:
           s.pop();
           break;
      case 3:
           return 0;   
             

    }
  }while(1);
  return 0;
}
