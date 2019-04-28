#include <iostream>

//static variables
//avoid unnessary consumption of memory space
//allocate, intialize, and persist until the end of program

/*
declare static variables
*/
class sequenceADT {
private:
  static vector<int> elements;
  static const int max_size=1024;
  static int numObjs;
public:
  sequenceADT();
  static int getNumObjs();
  static int getElement(int pos);
}

//intialize static data members, can't be done in the contstructor, must be done outside member fcns

//static member functions; don't need to mention again that it is static
int sequenceADT::getElement(int pos){
  return elements[pos];
}

//lambda function
int main (){
  auto sum=[](int x, inty){return x+y}
  return 0;
}
