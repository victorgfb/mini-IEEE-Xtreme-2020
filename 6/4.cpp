#include <iostream>
#include <vector>

using namespace std;
 
int main() {
    int a, aux1, aux2, div;
    vector<int> l1, l2, sums;

    cin >> a;

    while(a != 0){
        l1.clear();
        l2.clear();

        for(int i = 0; i < a; i++){
            cin >> aux1;
            cin >> aux2;
            l1.push_back(aux1);
            l2.push_back(aux2);
        }

        div = 0;

        for(int i = 0; i < l1.size(); i++){
            div += l2[i]/2;
        }

        sums.push_back( (int) div/2); 
        
        cin >> a;
    }

    for(int i = 0; i < sums.size(); i++){
        cout << (int) sums[i] << endl;
    }

    cout << "" << endl;
 
    return 0;
}