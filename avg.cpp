#include <iostream>
#include <format>
using namespace std;

int main() {
  int n;
  int total = 0;
  
  cout << "Entra 10 enteros: ";

  for (int i = 0; i < 10; i++) {
    cin >> n;
    total += n;
  }

  int average = total / 10;

  cout << format("El promedio es: {:.2f}\n");
  return 0;
}