#include <iostream>
#include <limits>
using namespace std;

int Square();
double Rectangle();
double Triangle();

int main(){
  int choice;
  do{
    cout << "Please select the area of the shape to calculate\n";
  string array [] = {"1. Square","2. Rectangle", "3. Triangle", "4. Quit Program"};
int size = sizeof(array)/sizeof(string);
for(int i = 0; i < size; i++){
  cout << array[i] << endl;
}


cout << "Enter selection: \n";
cin >> choice;

switch(choice){
  case 1: cout << "Area of the Square is  " << Square() << endl;
  break;
  case 2: cout << "Area of the Rectangle is  " << Rectangle() << endl;
  break;
  case 3: cout<<"Area of the Triangle is  " << Triangle() << endl;
  break;
}
  }while(choice !=4);

}

int Square(){
  int length;
  cout << "Enter your length: ";
  cin >> length;
  while(cin.fail()){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "invalid ";
    cout << "please enter a valid number: ";
    cin >> length;
  }
  int area = length * length;
  return area;
}

double Rectangle(){
  double length;
  double width;
  cout << "Enter your length and width: ";
  cin >> length >> width;

  while(cin.fail()){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "invalid ";
    cout << "please enter a valid length and width: ";
    cin >> length >> width;
}
double area = length * width;
return area;
}

double Triangle(){
  double Base,Height;

  cout << "Enter your Base and Height: ";
  cin >> Base >> Height;

  while(cin.fail()){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "invalid ";
    cout << "please enter a valid Base and Height: ";
    cin >> Base >> Height;
}
double area = 1/2.0 * (Base * Height);
return area;

}