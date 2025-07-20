// PAPRI SEN
// 24070123070
// A3
#include <iostream>
using namespace std;
int main() {
    float x,y;

    cout << "Enter X Coordinate:";
    cin >> x;
    cout << "Enter Y Coordinate:";
    cin >> y;
    if(x>0 && y >0) 
    {
        cout<<"It is in First Quadrant"<<endl;
    }
    else if(x<0 && y >0) 
    {
        cout<<"It is in Second Quadrant"<<endl;
    }
    else if(x<0 && y <0) 
    {
        cout<<"It is in Third Quadrant"<<endl;
    }
    else if(x>0 && y <0) 
    {
        cout<<"It is in Fourth Quadrant"<<endl;
    }
    else if(x == 0&& y > 0 || y<0) 
    {
         cout<<"Y axis"<<endl;
    }
    else if(y == 0&& x > 0 || x<0) 
    {
        cout<<"X axis"<<endl;
    }
    else  
    {
        cout << "On Origin"<<endl;
    }
return 0;
}
