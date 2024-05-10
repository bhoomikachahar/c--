# include <iostream>
# include <vector> 
using namespace std;


int main(){
    int arr[10];

    vector <int> variable = {1,2,3,4};
    // variable.push_back(6);
    variable.pop_back();
    for (int i =0 ; i<variable.size(); i++){
        cout<<variable[i]<<" ";
    }

}