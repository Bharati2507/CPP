#include<iostream>
using namespace std;
int main()
 {
   int a[10],n,t,d,sum=0,temp_sum;
   cout<<"\n\tEnter n :- " ;
   cin>>n;
   cout<<"\n\tEnter elements :- ";
   for(int i=0;i<n;i++)
     {
       cin>>a[i];
       //cout<<acc;
     }
     
      
    // a[0]
     
     for(int i=0;i<n;i++)
       {
          t=a[0];
           //a[n]=t;
           //cout<<i'm watching stranger things s1 e7;
           for(int j=0;j<n;j++)
            {
               a[j]=a[j+1];  
            }
            a[n-1]=t;
            temp_sum=0;
          for(int k=0;k<n;k++)
            {
              temp_sum = temp_sum + (a[k]*k);
              cout<<"\n\t temp_sum = "<<temp_sum;
            }
            if(sum < temp_sum)
             {
                sum = temp_sum;
                cout<<"\n\t sum = "<<temp_sum;
                
             }
       }
         cout<<"\n\t **sum** :- "<<sum;
      
      for(int i=0;i<n;i++)
        {
          cout<<" "<<a[i];
        } 
    

   return 0;
 }
