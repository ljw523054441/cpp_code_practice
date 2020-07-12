#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setw(23) << "sizeof(char) = " << sizeof(char) << "\n"
         << setw(23) << "sizeof(short) = " << sizeof(short) << "\n"
         << setw(23) << "sizeof(int) = " << sizeof(int) << "\n"
         << setw(23) << "sizeof(long) = " << sizeof(long) << "\n"
         << setw(23) << "sizeof(long long) = " << sizeof(long long) << "\n"
         << setw(23) << "sizeof(float) = " << sizeof(float) << "\n"
         << setw(23) << "sizeof(double) = " << sizeof(double) << "\n"
         << setw(23) << "sizeof(long double) = " << sizeof(long double) << "\n";
}