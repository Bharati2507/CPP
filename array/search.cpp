#include<iostream>
using namespace std;

int search_function(int arr[],int n ,int x , int *index , int *element)
   {
       for(int i = 1; i<=n; i++)
          {
              if(arr[i]==x)
                {
                   *index = i;
                   *element = arr[i];
                   return 1;   
                }
               else 
                {
                    return 0 ;
                }
          }
       
      
   }

int main()
 {
     int n , arr[20] , x , index , element ;
     cout<<"Eneter no elements in array";
     cin>>n;
     for(int i = 0; i<n; i++)
       {
           cout<<"Enter element";
           cin>>arr[i];

       }
     cout<<"Enter element you want to search";
     cin>>x;
     int s_element = search_function(arr,n , x , &index , &element );
     cout<<s_element;
     if(s_element == 1)
      {
          cout<<"Element found at "<<index<<element;

      }
     else
     {
         cout<<"Sorryhy";
     }
     
 }
