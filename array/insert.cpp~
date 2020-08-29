#include<iostream>
using namespace std;
int main ()
 {
   int n , array[20] ,no_elements, new_element,pos;
   cout<<"\n\tEnter total number of elements : ";
   cin>>n;
   for(int i = 0;i<n;i++)
     {
       cout<<"\n\t Enter an element : ";
       cin>>array[i];
     }
    cout<<"\n\tEnter number of elements you want to insert";
    cin>>no_elements;
    for(int i = 0;i<no_elements;i++)
      {
        cout<<"\n\tEnter element you want to insert";
        cin>>new_element;
        cout<<"\n\tEnter  where you want to insert ";
        cin>>pos;
        for(int j=n-1;j>=pos;j--)
           {
             array[j+1] = array[j];
           }
           array[pos]=new_element;
           
           cout<<"After inserting "<<new_element<<" array is : ";
           n++;
     for(int i=0;i<n;i++)
       {
         cout<<"\n\t"<<array[i];
       } 
       
      }
     
     
   return 0 ;
 }
