#include<iostream>
using namespace std ;
// void rotation(int array[],int n , int d)
// {
//     for(int i = 0;i<d;i++)
//       {
//           int m = array[n-1];
//           for(int j=n;j>0;j--)
//             {
//                 array[j] = array[j-1];
//             }
//             array[0]= m;
//       }
    
//     for(int i=0;i<n;i++)
//       {
//           cout<<"\n"<<array[i]<<" ";
//       }
// }

void reverse(int array[],int n )
{
  cout<<"REVERSE";
    int start = 0,end = n-1;
    while(start<end)
      {
        int temp = array[start] ;
        array[start]=array[end];
        array[end]=temp;
        start++;
        end--;
      }
    
    for(int i=0;i<n;i++)
      {
          cout<<"\n"<<array[i]<<" ";
      }
}

int main()
{
    int array[10],n,d;
    char choice;
    int c = 1;
    //  do{
    //      cout<<"\na.right rotation\nb.left rotation\nc.cyclic rotation";
    //      cin>>choice;

    //      switch(choice)
    //       {
    //         case a : rotation()
    //       }

    //  }while(choice="y")
    
    cout<<"Enter total no of elements :";
    cin>>n;
     cout<<"Enter no of rotations :";
     cin>>d;
    for(int i=0;i<n;i++)
    {
      cout<<"Enter element : \n";
      cin>>array[i];
    }
     //rotation(array,n,d);
    reverse(array,n);

}
