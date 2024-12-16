// Qus-> Print any one sequence only which will have the sum k;
#include<iostream>
#include<vector>
using namespace std;
bool fun(int index,int arr[],vector<int>ds,int sum,int k,int n) {
    if(index == n) {
        if(sum == k) {
            for(auto it:ds) {
                cout << it << " ";
            }
            cout << endl;
            return true;
        }
        return false;
    }
    //case takeit
    ds.push_back(arr[index]);
    sum += arr[index];
    if(fun(index+1, arr,ds,sum,k,n)) return true;
    //case not take 
    ds.pop_back();
    sum -= arr[index];
    if(fun(index+1,arr,ds,sum,k,n)) return true;

    //return false if no sequence found
    return false;
}
int main() {
    int n,k;
    int arr[100];
    cout << "Enter size of Array: ";
    cin >> n;
    cout << "Enter the Elements in Aray: ";
    for(int i=0; i < n; i++) cin >> arr[i];
    cout << "Enter the value of 'K' : ";
    cin >> k;
    vector<int>ds;
    fun(0,arr,ds,0,k,n);
    return 0;
}