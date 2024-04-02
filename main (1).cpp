#include <iostream>
using namespace std;

int main() {
  int num1;
  int num2;
  char opp; // Changed int to char for operator

  cout << "Enter first number: ";
  cin >> num1;

  cout << "Enter operator (+, -, *, /): "; // Corrected the typo "opp" to
                                           // "operator"
  cin >> opp;

  cout << "Enter second number: ";
  cin >> num2;

  int result;
  if (opp == '+') {
    result = num1 + num2;
  } else if (opp == '-') {
    result = num1 - num2;
  } else if (opp == '*') {
    result = num1 * num2;
  } else if (opp == '/') {
    result = num1 / num2;
  } else {
    cout << "Invalid operator" << endl;
    return 1;
  }

  cout << "Result: " << result << endl;

  return 0;
}
