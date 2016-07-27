#include <iostream>
#include <fstream>

using namespace std;

int main() {
    cout << "in Main" << endl;

    ifstream routeMap;
    routeMap.open ("/Users/willturner/Desktop/route.txt");

    string myArray[14];

    for (int i = 0; i < 14; i++){
        getline(routeMap, myArray[i], '*');

        cout << myArray[i] ;
    }

    routeMap.close();
    return 0;
}