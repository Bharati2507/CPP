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
   cout<<"Enter number of elements you want to delete ";
   cin>>no_elements;
   for(int k = 0;k<no_elements;k++ )
     {
        cout<<"Enter element you want to delete ";
        cin>>new_element;
  
        for(int i = 0;i<n;i++)
          {
            if(array[i]==new_element)
              {
                for(int j=i;j<n+1;j++)
                  {
                    array[j]=array[j+1];
                  }
              }
          }
        n=n-1;
        cout<<"\n\tnew array \n\t";
        for(int i = 0;i<n;i++)
          {
           cout<<array[i]<<"\n";
       
          }
  
     }
     
  return 0;   
 }
