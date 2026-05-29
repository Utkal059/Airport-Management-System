#include <bitsc++/std>
using namespace std;
    int largestElement(vector<int>& nums) {
        int mymax = arr[0];
        for (int i =1;i<n;i++)
        {
            if (mymax >= arr[i])
            continue ;
            else mymax = arr[i];

        }
        return mymax;



    }
int main(){
     cout<<largestElement({3,4,9,2});
}