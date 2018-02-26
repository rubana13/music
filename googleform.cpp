#include <iostream>
#include <string>
using namespace std;
class questions{
  public:
  void googleForm(){
    const string title = "c++";
    cout<<title<<endl;
    const string help = "Questions based on c++";
    cout<<help<<endl;
    string type = "objective type";
    cout<<type<<endl;
    string answer = "c++ is based on oops concepts";
    string *change;
    change = &answer;
    cout<<"Answer: "<<*change<<endl;
    cout<<"Answer address: "<<&answer<<endl;
      
  }
};
int main() {
	// your code goes here
 questions obj1;

  int n;
  cout<<"select one or two"<<endl;
  cout<<"\n 1.orignal";
  cout<<"\n 2.duplicate"<<endl;
  cout<<"enter the number"<<endl;
  cin>>n;
  switch(n){
    case 1: 
      obj1.googleForm();
      break;
    case 2:
      questions obj2(obj1);
      cout<<"\n \nyou create a duplicate copy...."<<endl;
      obj2.googleForm();
      break;
  }
	return 0;
}
