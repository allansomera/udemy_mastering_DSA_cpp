#include <cstdio>
#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle{
    int length; // 4 bytes
    int width; // 4 bytes
    char x; // 4 byte, but compiler will only use 1 byte
// } r1, r2, r3; // you can declare multiple variables like this
};

// struct Rectangle r1,r2,r3; //  you can also declare variables like this
int main() {

    struct Rectangle r1 = {1,5};
    // printf("%lu", sizeof(r1));
    r1.length = 15;
    r1.width = 7;
    cout << r1.length << endl;
    cout << r1.width << endl;
    cout << sizeof(r1) << endl;
    return 0;
}
