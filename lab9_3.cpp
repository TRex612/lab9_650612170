/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    int age,height,bounty;
    string namecharacter[] = {"Zoro","Sanji","Usopp","Chopper","Jinbe","Franky","Brook"} ,namechar;

    cout << "Enter your age: ";
    cin >> age ;

    if (age <= 25)
    {
        cout << "Enter your height: ";
        cin >> height ;
        if (height<100)
        {
            namechar = namecharacter[3];
        }
        else if (height<180)
        {
            namechar = namecharacter[2];
        }
        else{
            cout << "Enter your bounty: ";
            cin >> bounty ;
            if (bounty > 1100000000)
            {
                namechar = namecharacter[0];
            }
            else{
                namechar = namecharacter[1];
            }
            
        }
        
        
    }
    else{
        if (age <= 60)
        {
            cout << "Enter your bounty: ";
            cin >> bounty ;
            if (bounty>500000000)
            {
                namechar = namecharacter[4];
            }
            else{
                namechar = namecharacter[5];
            }
            
        }
        else{
            namechar = namecharacter[6];
        }
        

    }
    
    cout << "Your character = " << namechar ;

}