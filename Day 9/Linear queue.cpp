#include <iostream>
using namespace std;
 class queue
 {
   int arr[5];
   int front=-1;
   int rear=-1;
public:
   void insert(int);
   int del();
 };

 void queue::insert(int x)
 {
   if(rear==4)
   {
     cout<<"Queue Overflow\n";
     return;
   }
   rear+=1;
   arr[rear]=x;
   cout<<"\n inserted "<<x<<" Successfully!\n";
 }

 int queue::del()
 {
   int x;
   
   if(front>=rear)
   {
     cout<<"Queue Underflow\n";
     return -1;
   }
    front+=1;
   x=arr[front];
  
   return x;

 }

 int main()
 {
   queue q;
   
   int choice;
   
   do
   {
     cout<<"1.Insert\n2.Delete\n3.Quit\n";
     cout<<"Enter choice:";
     cin>>choice;
     switch(choice)
     {
       case 1:
           int x;
           cout<<"Enter the element u wanna insert:";
           cin>>x;
           q.insert(x);
           break;
       case 2:
           int y;
           y=q.del();
           if(y!=-1)
             cout<<"Deleted element="<<y<<endl;
           break;
       case 3:
             return 0;    


      }
   }while(1);
   return 0;
 }
