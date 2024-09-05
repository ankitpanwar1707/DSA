#include<iostream>
#include<string>
using namespace std;
void reverse(string &str,int i,int j){
    if(i>j)
    return ;
    swap(str[i],str[j]);
    i++,j--;
reverse(str,i,j);
}
int main(){
    string str;
    cout<<"Enter The String:";
    cin>>str;
    reverse(str,0,str.length()-1);
    cout<<str;
    return 0;
}

/******************************************************************************************************/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left=0;
        int right = s.size()-1;
        while(left<right){
           char temp=s[left];
           s[left] = s[right];
           s[right] = temp;
           left++,right--;
        }
    }
};