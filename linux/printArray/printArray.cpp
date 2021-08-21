#include <iostream>
#include <boost/format.hpp>

using namespace std;
using namespace boost;

int main()
{
    unsigned int arr[5] = { 0x05, 0x04, 0xAA, 0x0F, 0x0D };

    cout << format("%02X-%02X-%02X-%02X-%02X")
            % arr[0]
            % arr[1]
            % arr[2]
            % arr[3]
            % arr[4]
         << endl;
}
