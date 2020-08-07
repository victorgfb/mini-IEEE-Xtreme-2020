#include <iostream>
#include <vector>

using namespace std;
 
int main() {
    int a, aux, sum;
    vector<int> l1, l2, sums;
    bool swap;

    while(cin >> a){
        sum = 0;
        l1.clear();
        l2.clear();

        for(int i = 0; i < a; i++){
            cin >> aux;
            // cout << aux << endl;
            l1.push_back(aux);
        }

        for(int i = 0; i < a; i++){
            cin >> aux;
            l2.push_back(aux);
        }

        do{
            swap = false;
            for(int i = 0; i < (a - 1); i++){
                if(l1[i] > l1[i + 1]){
                    aux = l1[i];
                    l1[i] = l1[ i + 1];
                    l1[i + 1] = aux;

                    aux = l2[i];
                    l2[i] = l2[ i + 1];
                    l2[i + 1] = aux;
                    // cout << "entrou" << endl;
                    swap = true;
                    sum += l2[i] + l2[i + 1];
                }
            }
        }while(swap);

        // cout << sum;
        sums.push_back(sum);
    }

    for(int i = 0; i < sums.size(); i++){
        cout << sums[i] << endl;
    }
 
    return 0;
}