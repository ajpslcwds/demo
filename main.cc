#include "string.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    float orin = 21.55;

    char buf[10];
    memcpy(buf, &orin, 4);

    float *out = (float *)buf;

    cout << *out << endl; // why 0?

    return 0;
}