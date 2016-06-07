#include <iostream>
//using namespace std;
using std::cout;
using std::cin;
using std::endl;

int max(int a, int b)
{
    return a>b?a:b;
}

int main(int argc, char** argv)
{
   int x,y;
   cout << "Enter the first value: "; cin>>x;
   cout << "Enter the second value: "; cin>>y;
   cout << max(x,y);
   cout << "Bye!";
   return 0;
}
