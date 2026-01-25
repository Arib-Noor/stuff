//Lab 2 Task 10
#include <iostream>
using namespace std;
#include <cstring>

int main() {
    // Declare and initialize the source array
    char source[] = "HelloWorld!";
    char destination[sizeof(source)];
    int size = sizeof(source) / sizeof(source[0]);
    for (int i = 0; i < size; i++) {
        destination[i] = source[i];
    }
    cout << source << endl;
    cout << destination << endl;

   char array3[sizeof(source)];
   strncpy(array3, source, sizeof(array3) - 1);
   cout << "Array3: " << array3 << endl;

    return 0;
}
