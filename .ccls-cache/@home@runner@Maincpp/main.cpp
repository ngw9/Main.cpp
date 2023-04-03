/*
 * Noah White
 * 16365 COP2334 202301
 * Created with Repl.it
 *
 * Program takes user input until -1 is given
 * The input number is output
 * Then the square of the input
 * Then the square root of the input
 * Then (n + 3) / 5 where "n" is input
 * Then ((n + 3) / 5) + ((n + 7) / 2) where "n" is input
 * Once the program is done, the number of loops is output
 */
#include <iostream>
using namespace std;

int main() {
  int userNum;
  double userNumSquared;
  double userNumSqrt;
  int counter = 0;

  do {
    counter += 1;
    cin >> userNum;

    if (userNum != -1) {
      userNumSquared = userNum * userNum;
      userNumSqrt = userNum / userNum;

      cout << userNum << " ";
      cout << userNumSquared << " ";
      cout << userNumSqrt << " ";
      cout << (userNum + 3) / 5 << " ";
      cout << ((userNum + 3) / 5) + ((userNum + 7) / 2) << endl;
    }
  } while (userNum != -1);
  cout << counter << endl;
}