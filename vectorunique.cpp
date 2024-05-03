#include <iostream>
#include <vector>
using namespace std;



    int finduniquevalue(vector<int> values)
    {
        int uniquevalue = 0;
        for (int i = 0; i < values.size(); i++)
        {
            uniquevalue = uniquevalue ^ values[i];
        }
        return uniquevalue;
    }

int main(){
    vector<int>values={1,1,5,4,4};
    int uniquevalue = finduniquevalue(values);
    cout<<"unique value is :"<<uniquevalue<<endl;
}

