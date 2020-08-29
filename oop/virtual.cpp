#include <iostream> 
using namespace std; 

class Base { 
public: 
	 virtual void show() 
	{ 
		cout << " In Base \n"; 
	} 
}; 

class Derived : public Base { 
public: 
	 void show() 
	{ 
		cout << "In Derived \n"; 
	} 
}; 

class Derived1 : public Base { 
public: 
	 void show() 
	{ 
		cout << "In Derived one\n"; 
	} 
}; 

void global(Base* bp[])
{
  for(int i=0;i<4;i++)
    {
      if(i==4)
       {
         Base &bp[i] = new Derived;
            bp[i]->show();
       }
      else
       {
         Base* bp[i] = new Derived1;
            bp[i]->show();
       }
       
    
    }
}

int main(void) 
{ 
	Base* bp[10]; 
	
   global(bp);
	// RUN-TIME POLYMORPHISM 
	

	return 0; 
} 

