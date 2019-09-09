//Authors: 
#include <iostream>
#include <string>
using namespace std; 
int main()
{

  int number = 0;
  string adjective = "";
  string verb = "";
  string noun = "";

  cout<< "Enter a number: " <<endl;
  cin>> number;
  cout<< "Enter a adjective: " <<endl;
  cin>> adjective;
  cout<< "Enter a verb: " <<endl;
  cin>> verb;
  cout<< "Enter a noun: " <<endl;
  cin>> noun;

  cout<<"Once upon a time there was a class filled with over " <<number<< " students. The students were all extremely " <<adjective<< " when it came to coding. Each person" <<verb<< "to class every week. At the end of the year we all should be " <<noun<< ".";
  return 0;
}
