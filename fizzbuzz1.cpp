#include <iostream>
using namespace std;

void fizzbuzz(int array[]) {
  for (int i = 0; i < 4; i++) {
    if (array[i] % 15 == 0) {
      cout << "FizzBuzz";
    } else if (array[i] % 3 == 0) {
      cout << "Fizz";
    } else if (array[i] % 5 == 0) {
      cout << "Buzz";
    } else {
      cout << array[i];
    }
    cout << '\n';
  };
};

int main() {
  int test[4] = {1, 3, 5, 15};
  fizzbuzz(test);
}
