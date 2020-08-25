#include<iostream>
using namespace std ;
int main()
 {
 	int a[10],n,cnt=0,tmp,d,m=0;
 	cout<<"\n\tentr n ;- ";
 	cin>>n;
 	for(int i=0;i<n;i++)
 	 {
 	 	cout<<"\n\tenter element ;- ";
 	 	cin>>a[i];
 	 	
	  }
	  cout<<"\n\tenter d";
	  cin>>d;
	 while(m<d)
	  {
	    
	  for(int i=0;i<n;i++)
	   {
	   
	   	if(cnt==n-2)
	   	 {
	   	 	tmp=a[n-1];
	   	 	while(cnt>=0)
	   	 	 {
	   	 	     a[cnt+1]=a[cnt];
				 cout<<"\n\tcnt="<<cnt;		
			
	   	       cnt--;	
			 }
			 a[0]=tmp;
			 // n--;
	   	 	break;
	   	      	
		 }
	   	else 
	   	 {
	   	 	cnt++;
			}
			
	   }
	   m++;
    }
	   cout<<"\n\tfinanl array is ";
    for(int i=0;i<n;i++)
     {
     	cout<<"\t"<<a[i];
	 }
 	return 0;
 }
