# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch(op) {
   
    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2<<endl;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2<<endl;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2<<endl;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2<<endl;
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct"<<endl;
      break;
      //hacktoberfest
  }

  return 0;
}
