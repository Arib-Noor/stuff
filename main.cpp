//Lab 4 Task 1
#include <iostream>  
using namespace std;
/*
* Add necessary include files, use std namespace, and create the skeleton of main function.
* Declare an integer variable `size`, and a float* pointer `scores`, initialized to `nullptr`.
* Ask the user to enter the number of students and store it in `size`.
* Dynamically allocate memory for a float array of that size using the statement:
  ```cpp
   scores = new float[size];
  ```
* Print a message confirming that memory was allocated.
* Initialize the array with fixed values (e.g., {85.5, 90.0, 78.5, 92.0, 88.0}).
* Use a loop to display the values.
* Free the memory using delete[].

*/
int main() {
  int size;
  float *scores = nullptr;
  cout << "Enter an integer " << endl;
  cin >> size;
  scores = new float[size];
  cout << "Memory allocated" << endl;
  scores = {1.0F,1.0F};
  for (int i = 0; i < size; i++) {  
    cout << scores[i];
  }
}