#include <iostream>
using namespace std;
int main ()  {
    
    int n, num;
    double sum;
    
    cout << "How may numbers are you going to type ";
    cin >> n;
        
    int c;
    for (c = 1; c <= n; c++) {
        cout << c << " ";
    }
    cout << endl;
    
    return 0;
}
