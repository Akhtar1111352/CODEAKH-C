#include <iostream>
using namespace std ;

int main()
{
    int n;
    cout<<"enter n:";
    cin >> n;
    int row = 1 ;55
   // cout<<row;
    while (row <= n)
    {
        //cout<<"\nakhtar";
        int column =0;
        //int a = row ;
       
        cout<<"\n";
        
        
        while (column <= row)
        {
            //cout << a;
            //a = a + 1;
    
            cout<<column+row;
            column++;
            cout << "  ";
        }
        cout << endl;
        
        row = row + 1;
    }
    return 0;
}