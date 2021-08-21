#include <boost/chrono/chrono.hpp>
#include <iostream>
#include <cmath>

using namespace std;
using namespace boost::chrono;

int main(int argc, char* argv[]) {
  system_clock::time_point start = system_clock::now();

  for (long i = 0; i < 10000000; ++i)
    sqrt(123.456L); // burn some time

  duration<double> sec = system_clock::now() - start;
  cout << "took " << sec.count() << " seconds\n";

  return 0;
}
