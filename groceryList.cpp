//Authors: Peter Bagaoisan, Fredrick Alvarez, Mick Shimada, Sultan Alketbi
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string item;
    int remove;
    char input;
    vector<string> grocery;
    bool cond = true;


    cout<<"\n==GROCERY LIST MANAGER==";
    while(cond == true){
        cout<<"\nEnter your choice: ";
        cout<<"\n(A)dd an item";
        cout<<"\n(S)how grocery list";
        cout<<"\n(Q)uit";
        cout<<"\nYour choice(A/S/Q): ";
        cin>>input;
        
        //Add
        if(input == 'a' || input == 'A'){
            grocery.resize(grocery.size()+1);
            cout<<"Add Items to your cart: ";
            cin>>item;
            grocery.insert(grocery.end(), item);
            cout<<endl;
        }
        //List
        else if(input == 's' || input == 'S'){
            for(int i=0; i<grocery.size(); i++){
                cout<<grocery[i]<<endl;
            }
        }
        //Quit
        else if(input == 'q' || input == 'Q'){
            cond = false;
        }
        
        else{
            cout<< "Invalid Entry, try again..."<<endl;
        }
    }
    return 0;
}

