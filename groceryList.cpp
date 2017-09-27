//Authors: Peter Bagaoisan, Fredrick Alvarez, Mick Shimada, Sultan Alketbi
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string item;
    char input;
    vector<string> grocery;
    bool cond = true;


    cout<<"\n==GROCERY LIST MANAGER==";
    while(cond == true){
        cout<<"\nEnter your choice: ";
        cout<<"\n(A)dd an item";
        cout<<"\n(S)how grocery list";
        cout<<"\n(R)emove an item";
        cout<<"\n(Q)uit";
        cout<<"\nYour choice(A/S/R/Q): ";
        cin>>input;

        if(input == 'a' || input == 'A'){
            //grocery.resize(grocery.size()+1);
            cout<<"Add Items to your cart: ";
            cin>>item;
           // grocery.insert(grocery.end(), item);
            cout<<endl;
        }
    }
}
