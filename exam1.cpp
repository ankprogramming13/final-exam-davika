#include <iostream>
using namespace std;
int main() {
    float number_1,number_2,result;
    char choice_operator,choice_continue;

    do

{
   ("cls");
   cout<<"Enter Number:";
   cin>>number_1;
   cout<<"Enter Number:";
   cin>>number_2;

   cout<<endl;
   cout<<"Select Operator"<<endl;
   cout<<"1)ddition  (+)"<<endl;
   cout << "2)ubtraction  (-)" << endl;
   cout << "3)ultiplication  (*)" << endl;
   cout << "4)ivision (/)" << endl;
   cout << "You Select : ";
   cin >> choice_operator;

   cout <<endl;
   cout <<number_1;
   switch(choice_operator)
   {
    case '+' :
    case '1' :
    cout << " + ";
        result = number_1 + number_2;
        break;

    case '-' :
    case '2' :
    cout << " - ";
        result = number_1 - number_2;
        break;

    case '*' :
    case '3' :
    cout << " * ";
        result = number_1 * number_2;
        break;

    case '/' :
    case '4' :
    cout << " / ";
        result = number_1 / number_2;
        break;
   }
    cout << number_2 << " = " << result << endl << endl;

          cout << "Continue (Y/N) : ";
          cin >> choice_continue;
}
      while(choice_continue == 'Y' || choice_continue == 'y');

     cout << endl << "Exit Program...";

     cout << endl<<endl;
     ("pause");
}


