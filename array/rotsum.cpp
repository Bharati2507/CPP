
//TO FIND :- MAXIMUM SUM AFTER ALL POSSIBLE ROTATIONS OF ARRAY 

#include<iostream>
using namespace std ;
int rotation(int sum,int n,int a[])
  {
  	int newsum=0;
  	 for(int i=0;i<n;i++)
  	   {
  	      newsum=(i*a[i])+newsum; 		
	   }
	 if(sum>newsum)
	   return sum;
	 else
	   return newsum;
	   
  }
int main()
 {
 	int a[10],n,x,sum=0,m=0,fsum=0;
     cout<<"\n\tenter value of n";
     cin>>n;
    for(int i=0;i<n;i++)   
       {
           cout<<"\n\tenter element ";
           cin>>a[i];
       }
    
    for(int i=0;i<n;i++)
       {
       	 sum=sum+(i*a[i]);
	   }
    
	 while(m<n)
	  {
		 x=a[0]; 
	    for(int i=0;i<n;i++)
	       {
	       	 
	       	 a[i]=a[i+1];
	       	
		   }
		    a[n-1]=x;
		 sum=rotation(sum,n,a);
	  m++;	 
     }
     cout<<"\n\tMAXIMUM SUM AFTER N ROTATIONS IS :- "<<sum;
 	return 0;
 }
