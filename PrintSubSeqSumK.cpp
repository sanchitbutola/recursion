//Q1-> Print the subsequence whose sum is K
#include<iostream>
#include<vector>
using namespace std;
void PrintSeq(int index,int arr[],vector<int> ds,int sum,int k,int n) {
    if(index == n) {
        if(sum == k){
            for(auto it: ds) cout << it << " ";
        }
        //cout << endl;
        return;
    }
    ds.push_back(arr[index]);
    sum += arr[index];
    //take it
    PrintSeq(index+1, arr, ds, sum, k, n);
    ds.pop_back();
    sum -= arr[index];
    //not take it
    PrintSeq(index+1,arr,ds,sum,k,n);

}
int main() {
    int n,k;
    int arr[100];
    vector<int>ds;
    cout << "Enter the Size Of Array: ";
    cin >> n;
    cout << "Enter Array Elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << "Enter The Value Of 'K' :  ";
    cin >> k;
    PrintSeq(0,arr,ds,0,k,n);
    return 0;
}