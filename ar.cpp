#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    for( string string; getline( cin, string ); ) {
        int max,numbers[ 10 ];
        istringstream stream( string );
        bool failure = false;
        for( int i = 0; i < 10; ++i ) {
            if( !( stream >> numbers[ i ] ) ) {
                failure = true;
                break;
            }
        }
        
        if( !failure ) {
            for( int i = 1; i < 10; ++i ) {
                max=numbers[0];
                if(max<numbers[i]){max=numbers[i];}
            }cout<<max;
        }
        else {
           cout << "An error has occured while reading numbers from line" << endl;
        }
    }
}
