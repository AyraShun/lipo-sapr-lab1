#include <cstdlib>
#include <iostream>
#include "Helloer.h"
using namespace std;
int main() {
    
    Helloer helloer("World");
    cout << helloer.message() << endl;
    return 0;
}