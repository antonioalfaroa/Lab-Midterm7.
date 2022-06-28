#include <iostream>

using namespace std;

class two;
class one{
public:
int a=2;
void saludo(){
  cout<<"hello"<<endl;
}
operator two();


};

class two{
public:
int b;
one::operator two(){
  two obj;
  obj.b=a;
  return obj;
}

  
};

