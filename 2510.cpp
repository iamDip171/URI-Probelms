#include <iostream>
using namespace std;

int main() {
  int n;
  string ch;
  cin >> n;
  while(n--){
      cin >> ch;
      cout << ((ch != "Batman")? "Y" : "N") << endl;
  }

    return 0;
}