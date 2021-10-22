#include <iostream>
using namespace std;

const int ARRAY_SIZE = 50000;

void arrayStatic();
void arrayStackDyanmic();
void arrayHeapDyanmic();

int main() {
  clock_t st;
 arrayStatic();
 arrayStackDyanmic();
 arrayHeapDyanmic();
}

void arrayStatic(){
  static int arr[ARRAY_SIZE];
  //init array
}

void arrayStackDyanmic(){
  int arr[ARRAY_SIZE];
   //init array
}

void arrayHeapDyanmic(){
  int* arr = new int[ARRAY_SIZE];
   //init array
}