/*
#include <iostream>

using namespace std;



int main() {

  // Complete the code.

  int a,b,i;

  cin>>a>>b;

for(i=a; i<=b; i++)

{

if(i>=1&&i<=9){

  switch (i) {

    case 1:

      cout << "one" << endl;

      break;

    case 2:

      cout << "two" << endl;

      break;

    case 3:

       cout << "three" << endl;

       break;

    case 4:

       cout << "four" << endl;

       break;

    case 5:

      cout << "five" << endl;

      break;

    case 6:

      cout << "six" << endl;

      break;

    case 7:

       cout << "seven" << endl;

      break;

    case 8:

      cout << "eight" << endl;

      break;

    case 9:

       cout << "nine" << endl;

      break;

  }

}

else if(i>9&&i%2==0)

  cout<<"even"<<endl;

else if(i>9&&i%2==1)

  cout<<"odd"<<endl;

} return 0;



}
*/


#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin>>a>>b;
    for (int n=a;n<=b;n++){
    if (n>=1 || n<=9){
        if (n==1){
        cout<<"one"<<endl;
        }
        if (n==2){
        cout<<"two"<<endl;
        }
        if (n==3){
        cout<<"three"<<endl;
        }
        if (n==4){
        cout<<"four"<<endl;
        }
        if (n==5){
        cout<<"five"<<endl;
        }
        if (n==6){
        cout<<"six"<<endl;
        }
        if (n==7){
        cout<<"seven"<<endl;
        }
        if (n==8){
        cout<<"eight"<<endl;
        }
        if (n==9){
        cout<<"nine"<<endl;
        }
    else if(n>9)
        if (n%2==0){
            cout<<"even"<<endl;
        }
        else
            cout<<"odd"<<endl;
    }
    }
    return 0;
}
