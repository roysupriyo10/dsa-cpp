#include <iostream>
using namespace std;

int findShoes(int friends, int left_shoes);

int main(int argc, char** argv) {
  int t;
  cin >> t;
  while (t--) {
    int N, M;
    cin >> N >> M;
    int shoes = findShoes(N, M);
    cout << "We need to buy " << shoes << " shoes" << endl;
  }

  return 0;
}

int findShoes(int friends, int left_shoes) {
  cout << "Friends: " << friends << endl;
  cout << "Left Shoes: " << left_shoes << endl;
  if (friends < left_shoes) {
    return friends;
  }
  else {
    return (2 * friends) - left_shoes;
  }
}
