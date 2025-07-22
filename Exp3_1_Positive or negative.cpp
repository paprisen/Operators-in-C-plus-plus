// PAPRI SEN
// 24070123070
// A3
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number:";
    cin >> a;
    if(a > 0)
    {
        cout << "Entered Number is Positive"; 
    }
    else if(a < 0) 
    {
        cout << "Entered Number is Negative"; 
    }
    else 
    {
        cout << "Entered Number is 0"; 
    }
    return 0;
}

/*
output:
Enter Number: 2
Entered Number is Positive

Enter a number:-5
Entered Number is Negative
*/
