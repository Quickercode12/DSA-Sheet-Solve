#include<iostream>
#include<vector>
using namespace std;



void reverseArray(vector<int>&num){

    int n = num.size();

    if(n <= 0){
        cout << "Invalid input" << endl;
        return;
    }

    int i = 0;
    while(i <= (n - 1 - i)){
        swap(num[i], num[n - 1 - i]);
        i++;
    }

}

/*
void reverseArray(vector<int>&num){

    int n = num.size();

    if(n <= 0){
        cout << "Invalid input" << endl;
        return;
    }

    // two pointer approch
    int first = 0;
    int last = n - 1;

    while(first <= last){
        swap(num[first], num[last]);
        first++;
        last--;
    }

}
*/

void reverseString(string &name){

    //NOTE : reverse pre-define function with we can reverse the string

    int n = name.size();

    int first = 0;
    int last = n - 1;

    while(first <= last){
        swap(name[first], name[last]);
        first++;
        last--;
    }

}

// Q.1 reverse the string
int main(){
     
    int input;
    cout<<"Enter the size of the array: ";
    cin>>input;

    vector<int>arr(input);

    cout<<"insert the element"<<endl;
    for(int i = 0; i < input; i++){
        cin>>arr[i];
    }

    reverseArray(arr);
    reverseString(name);
    cout<<"your array elements: "<<endl;
    for(auto i : arr){
        cout<<i<<" ";
    }cout<<endl;
    
    cout<<"reverse name: "<<name<<endl;

    return 0;
}

//time complexity o(n)