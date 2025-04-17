#include <iostream>
using namespace std;

int main(){
  string array[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179" };
   int size = sizeof(array) / sizeof(string);

   for(int i = 0 ; i < size;  i++){
     if(array[i][0] = 'B'){
      cout << array[i] << " "  << " starts with the letter B" << endl;
     }
   }

}