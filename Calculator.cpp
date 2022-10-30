# include <iostream> // provides basic input and output services for C++ programs
using namespace std;

int main() {
  
  // defining operator
  char op; 
  // defining two operands (number1 and number2)
  float num1, num2;
  
  // priting message to a console
  cout << "Enter operator: +, -, *, /: ";
  // fetching user's input for an operator
  cin >> op;
  
  // priting message to a console
  cout << "Enter two operands: ";
  // fetching user's operands input for an operator
  cin >> num1 >> num2;

  switch(op) {
  
    // summarising
    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    // deducting
    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    // multiplying
    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    // deviding
    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}
