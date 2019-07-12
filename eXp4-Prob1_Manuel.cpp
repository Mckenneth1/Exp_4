#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

void printCalcuMenu()
{
  cout << "MENU:" << '\n' << "1. Add" << '\n' << "2. Subtract" << '\n' << "3. Multiply" << '\n' << "4. Divide" << '\n' << "5. Modulus" << '\n' << endl;
}
void userInput(char choice, int num1, int num2)
{
  int total;

  switch (choice)
  {
  case '1':
    total = num1 + num2;
    cout << "Result: " << total << endl;
    break;
  case '2':
    total = num1 - num2;
    cout << "Result: " << total << endl;
    break;
  case '3':
    total = num1 * num2;
    cout << "Result: " << total << endl;
    break;
  case '4':
    total = num1 / num2;
    cout << "Result: " << total << endl;
    break;
  case '5':
    total = num1 % num2;
    cout << "Result: " << total << endl;
    break;
  default:
      cout << "No operation can be done.";
  }
}

bool willContinue(char answer)
{
  switch (answer)
  {
  case 'Y':
  case 'y':
    return true;
    break;
  case 'N':
  case 'n':
    return 0;
  default:
    cout << "Response not recognized. Program will now close" << endl;
    return false;
  }
}
int main()
{
  char choice;
  int num1, num2;
  char answer = 'Y';
  bool loop = willContinue(answer);

  while (willContinue(answer))
  {
    printCalcuMenu();
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "Enter two numbers: " << endl;
    cin >> num1;
    cin >> num2;

    userInput(choice, num1, num2);

    cout << "Do you want to compute again?" << endl;
    cin >> answer;
    system("cls");
  }
  getch();
  return 0;
}
