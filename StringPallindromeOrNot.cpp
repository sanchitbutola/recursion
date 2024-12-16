/*#include<iostream>
using namespace std;
bool fun (string str,int s,int e) {
    if(s >= e) return true;
    if(str[s] != str[e]) return false;
    return fun(str,s+1,e-1);
}
int main() {
    string str;
    cout << "Enter the String: ";
    cin >> str;
    cout << fun(str,0,str.size()-1);
    return 0;
}*/
 
//--------------------------------------------------------------------//
//2nd method to perform the same thing
#include<iostream>
using namespace std;
bool fun(string str , int s) {
    if(s >= str.size()/2) return true;
    //find the mismatch at this moment
    if(str[s] != str[str.size()-s-1])
    return false;
    return fun(str,s+1);
}
int main() {
    string str;
    cout << "Enter the String to Check Weather It is Pallindrome or not : ";
    cin >> str;
    cout << fun(str,0);
    return 0;
}