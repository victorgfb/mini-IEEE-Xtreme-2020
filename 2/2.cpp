#include <iostream>
#include <vector>

using namespace std;
 
int main() {
    int a, count, num1, num2,i;
    bool flag;
    vector<int> results;

    while(cin >> a){

        count = 0;
        flag = false;

        for(i = 0; i < (a - 1); i++){
            cin >> num1 >> num2;
            
            // cout << num1  << ", " << num2 << endl;

            if(num1 == a){
                if(num2 == 0){
                    count++;
                }
                flag = true;
            }else{
                // printf("%d\n", num1);
                if(num2 == 1 && flag){
                    count++;
                }
            }
        }
        results.push_back(count);
        // printf("%d\n", count);
    }

    for(int i = 0; i< results.size(); i++){
        cout << results[i] << endl;
    }

    return 0;
    
}