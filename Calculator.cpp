#include <iostream>
#include <string> 
using namespace std;

int main() 
{
  // Declaring Variables
  int a, b, calculation;
  int result;
  
  // Process
  cout << "Please select the calculation type you wish to preform \n" << "1 - Addition \n2 - Subtraction \n3 - Multiplication \n4 - Division ";
  cin >> calculation;
  
  if (calculation = 1)
  {
    cout << "Please insert the first and second number below \n";
    cin >> a;
    cout << "\n";
    cin >> b;
    int result (a+b);
    cout << "The answer is " << result;
  }
  
  else if (calculation = 2)
  {
    cout << "Please insert the first and second number below \n";
    cin >> a;
    cout << "\n";
    cin >> b;
    int result (a-b);
    cout << "The answer is " << result;
  }
  
  else if (calculation = 3)
  {
    cout << "Please insert the first and second number below \n";
    cin >> a;
    cout << "\n";
    cin >> b;
    int result (a*b);
    cout << "The answer is " << result;
  }
  
  else if (calculation = 4)
  {
    cout << "Please insert the first and second number below \n";
    cin >> a;
    cout << "\n";
    cin >> b;
    int result (a/b);
    cout << "The answer is " << result;
  }
  
  // Printing Result
  cout << "The answer is ";
  cout << result;
  
  // Terminate Program
  return 0;
}
