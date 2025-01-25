#include <iostream>

using namespace std;
int sum(int number );

int main() {
    int n = 0;

  cout << "Provide a number: \n";
  cin >> n;

  cout << "The sum of integers up to " << n << " is " << sum(n);


}

int sum(int number ) {
    int a = 0;
    for(int i = 0; i < number + 1; i++){
        a += i;

    }
    return a;
}