#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;


int main(){
 srand(time(0));
 int daysuntiexpirationdays = rand() % 12;

 if(daysuntiexpirationdays > 5 || daysuntiexpirationdays == 10 ){
  cout << "Your subscription will expire soon. Renew now!";
 }
 else if(daysuntiexpirationdays > 1 || daysuntiexpirationdays == 5){
  cout << "Your subscription expires in "<<  daysuntiexpirationdays << " Renew now and save 10%!" ;
 }
  else if (daysuntiexpirationdays == 1){
    cout << "Your subscription expires within a day! Renew now and save 20%! ";

  }
  else if(daysuntiexpirationdays == 0){
    cout << "Your subscription has expired. ";
  }
  else{
    cout << "You have an active subscription. ";
  }
}