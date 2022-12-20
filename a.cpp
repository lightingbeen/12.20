#include <iostream>
#include <iterator>
using namespace std;
constexpr int get_size() { return 10; }
int main() {
  constexpr int q = get_size();
  cout << q;
}