#include <iostream>
using namespace std;
int main()
{
    int a = 10;

    int *pa = &a;
    *pa = 20; // reasign the value of a via address of a

    int **paa;
    paa = &pa;

    // cout << "The address of a is:" << pa << endl; // address of a
    // cout << "The value of a is:" << *pa << endl;  // value of a
    // cout << "The updated value:" << a << endl;
    cout << paa << endl;  // address off pa
    cout << *paa << endl; // v alue of pa
    cout << **paa;        // value of pa refer to the addresses value

    return 0;
}