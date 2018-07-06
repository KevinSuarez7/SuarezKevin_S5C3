#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

int main()
{
  int i, numeroal;
  int cont=0;
 
  for(i=0;i<1000;i++)
   {
    numeroal = rand() % 100 + 1;
    //cout << i << " " << numeroal << endl;  
    if (numeroal%2==0 && numeroal<89)
	{
	 cont=i;
           if(cont<25)
	    {
	     cout << numeroal << endl;
            }
	    else
	    {
             break;     
            }	
         }
    
   }	

  return 0;
}

