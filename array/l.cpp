#include<iostream>
using namespace std ;

class node 
 {
    public :
       node *next ;
       int data;
 };

class sl
 {
     node *head,*tail;
    public :
        sl()
         {
           head=tail=NULL;
         }
          void create();
          void show();
 };
 
 void sl :: create()
  {
     node *tmp,*tmp1;
     tmp=NULL;
     tmp1=NULL;
     int n;
     cout<<"\n\tEnter total no of nodes :- ";
     cin>>n;
        for(int i=0;i<n;i++)
           {
             tmp = new node ;
             cout<<"\n\tEnter data for new node :- ";
             cin>>tmp->data;
            tmp->next = NULL ;
              if(head==NULL)
               {
                 head->data = tmp->data;
                  //tmp = tmp->next;                 
               }
             /* else if(tmp->next==NULL)
               {
                 tail->data = tmp->data;
                  
               }  */
             //tmp=tmp->next;
           }
        
        for(int k=0;k<n;k++)
          {
            tmp1->data=head->data;
            cout<<tmp1->data;
            tmp1=tmp1->next;
          }   
        
  }
 
 
 
 int main()
  {
    sl s;
    s.create();
    return 0;
  }

