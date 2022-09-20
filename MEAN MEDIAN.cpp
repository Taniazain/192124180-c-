#include <iostream>

using namespace std;

void mode(int[], int);
int main()
{
   int array[15];
   float total, mode;
   int n = 15;
    for(int i=0; i<n; i++){
        cout << "fill in the "<< i+1 << " number. :";
        cin >> array[i];
    }

    sort(array, n);
    return 0;
}