#include <iostream>
using namespace std;

int multiplicacion(int x,int y);
int cuadrado(int x);

int main()
{
  int a;
  int b;

  a = 17;
  b = 31;
	
  cout << "la multiplicacion de a x b es" << multiplicacion(a,b) << endl;
  cout << "el cuadrado de a es" <<  cuadrado(a);
}

int multiplicacion(int x, int y)
{
  int z;	
  z = x*y;
  return z;
}

int cuadrado(int x)
{
  int w;
  w = x*x;
  return w;
}

