#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Please enter n" << endl;
    cin >> n;
    //TOP HALF OF THE FISH
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i; j++)
            cout<<" ";
        for (int j = 0; j < 2 * i - 1; j++)
            cout << "*";
        for (int j = 0; j < 2 * (n - i); j++)
            cout << " ";
        for (int j = 3; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    //BOTTOM HALF OF THE FISH
    for (int i = n; i >= 1; i--){
        for (int j = 0; j < n - i; j++)
            cout << " ";
        for (int j = 0; j < 2 * i - 1; j++)
            cout << "*";
        for (int j = 0; j < 2 * (n - i); j++)
            cout << " ";
        for (int j = 3; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}
