#include<iostream>
using namespace std ;
void rotation(int array[],int n , int d)
{
    for(int i = 0;i<d;i++)
      {
          int m = array[n];
          for(int j=n;j>0;j--)
            {
                array[j] = array[j-1];
            }
            array[0]= m;
      }
    
    for(int i=0;i<n;i++)
      {
          cout<<"\n"<<array[i]<<" ";
      }
}
int main()
{
    int array[10],n,d;
    cout<<"Enter total no of elements :";
    cin>>n;
    cout<<"Enter no of rotations :";
    cin>>d;
    rotation(array,n,d);

}