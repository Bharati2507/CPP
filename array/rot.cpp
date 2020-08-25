#include<iostream>
using namespace std;
int main()
 {
   int a[10],n,t,d,sum=0,temp_sum=0;
   cout<<"\n\tEnter n :- " ;
   cin>>n;
   cout<<"\n\tEnter elements :- ";
   for(int i=0;i<n;i++)
     {
       cin>>a[i];
     }
     
      cout<<"how many rotations do u want ?";
       cin>>d;
    // a[0]
     
     for(int i=0;i<d;i++)
       {
          t=a[0];
         //  a[n]=t;
           for(int j=0;j<n;j++)
            {
               a[j]=a[j+1];  
            }
            a[n-1]=t;
       }
   
   
      
      for(int i=0;i<n;i++)
        {
          cout<<" "<<a[i];
        } 
    

   return 0;
 }
