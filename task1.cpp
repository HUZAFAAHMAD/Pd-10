#include <iostream>
using namespace std;
main()
{
    int number;
    int total =0;
    cout << "Enter the number of elements :" << endl;
    cin >> number;
    string find[number];

    
    

    cout << "Enter " << number << " strings ,one per line" << endl;
    
    
    for ( int x = 0 ; x < number ; x++)
    {
        
        cin >> find[x];
        if (find[x] == "right")
        {
            total = total + 90; 
        }
        else 
        {
           total = total - 90;  
        }
        
    }  
    cout << total/360;
    
}