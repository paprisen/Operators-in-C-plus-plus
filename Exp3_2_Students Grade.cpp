// PAPRI SEN
// 24070123070
// A3
#include<iostream>
using namespace std;
int main()
{
    int MTT,NT,DCLD,SS,EDC,AVG;
    cout << "Enter Marks of MTT: ";
    cin >> MTT;
    cout << "Enter Marks of NT: ";
    cin >> NT;
    cout << "Enter Marks of DCLD: ";
    cin >> DCLD;
    cout << "Enter Marks of SS: ";
    cin >> SS;
    cout << "Enter Marks of EDC: ";
    cin >> EDC;
    AVG = (MTT + NT + DCLD + SS + EDC)/5;
    if(90 < AVG && AVG <=100) 
    {
        cout << "Your Marks Average are: "<< AVG <<" Grade is O";
    }
    else if(80 < AVG && AVG <=90) 
    {
        cout << "Your Marks Average are: "<< AVG <<" Grade is A+";
    }
    else if(70 < AVG && AVG <=80)  
    {
        cout << "Your Marks Average are: "<< AVG <<" Grade is A";
    }
    else if(60 < AVG && AVG <=70) 
    {
        cout << "Your Marks Average are: "<< AVG <<" Grade is B";
    }
    else if(50 < AVG && AVG <=40)   
    {
        cout << "Your Marks Average are: "<< AVG <<" Grade is C";  
    }
    else if(AVG < 0 || AVG > 100) 
    {
        cout << "Enter Marks Out of 100";
    }
    else 
        
    {
        cout << "FAIL";
    }
    return 0;
}

/*
output:
Enter Marks of MTT: 70
Enter Marks of NT: 85
Enter Marks of DCLD: 87
Enter Marks of SS: 90
Enter Marks of EDC: 74
Your Marks Average are: 81 Grade is A+
*/    
