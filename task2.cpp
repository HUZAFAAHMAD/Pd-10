#include <iostream>
using namespace std;
main()
{
int number;
int num = 2;
    int total =0;
    cout << "Enter the number of elements :" << endl;
    cin >> number;
    int find[number];

    
    

    cout << "Enter " << number << " elements ,one per line" << endl;
    
    
    for ( int x = 0 ; x < number ; x++)
    {
        
        cin >> find[x];
    }
    
    int min;
    for (int i = 0 ; i <number ; i++)
    {
      for (int j = 0; j < number-i-1 ; j++)
      {
        if(find[j] > find[j + 1] )
        {
          min = find[j];
          find[j] = find[j + 1];
          find[j + 1] = min; 

        }         
      }
    }
    for (int i = 0 ; i <number-1 ; i++)
    {
     
        if((find[i]+1) != find[i+1] )
        {
            num = 0;
        }
        
    }
    if(num == 0)
    {
        cout << "False";
    }
    else
    {
        cout << "True";
    }
    
    
    }    
