#include <iostream>
#include <sstream>
using namespace std;

bool massive(int a[10])
{
    string string;
    getline( cin, string );
    istringstream stream( string );
    bool res = true;
    for( int i = 0; i < 10; ++i ) {
        if ( !(stream >> a[ i ]) ) {
            res = false;
            break;
        }
    }
    return res;
}
int decrease(int a[10]) {
    for(int i = 0; i < 10; i++) {
        if (!(a[i] >= a[i-1])) {cout << "The input sequence must be non-decreasing."; exit(0); }
    }
    return 0;
}

int main()
{
    int last[10];
    int sum;
    if(massive(last)) {
        decrease(last);
        cin >> sum;
        bool no = true;
        for(int i=0; i<10; i++) {
            for (int k = 1; k<10; k++) {
                if ((last[i]+last[k] == sum) && (last[i] != last[k])) {cout << last[i] << " " << last[k] << endl; no = false; exit(0); }
            }
        }
        if(no) cout << "There is no such pair of numbers.";
    }

    else {
        cout<<"An error has occurred while reading the input sequence.";
    }

}
