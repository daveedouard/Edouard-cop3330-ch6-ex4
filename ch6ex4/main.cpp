/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Dave Edouard
 */
#include "std_lib_facilities.h"
#include <iostream>
using namespace std;

class nameValClass{
public:
    string name;
    int value;
};

vector<nameValClass> nameVal;

void nameValue(){
    nameValClass data;
    int flag = 0;

    cout << "Enter a name and value or enter 'None' and '0' to finish: \n";

    while (flag == 0){
        cout << "Name: ";
        cin >> data.name;
        cout << "Value: ";
        cin >> data.value;

        for (int i=0; i<nameVal.size(); i++){
            while (nameVal[i].name == data.name){
                cout << "Name is taken: \n" << endl;
                cin >> data.name;
            }
        }

        if (data.name == "None" && data.value == 0){
            flag = 1;
        }
        nameVal.push_back(data);
    }
}

void printData(){
    cout << '\n';
    for (int i = 0; i<nameVal.size()-1; i++){
        cout << nameVal[i].name << ' ' << nameVal[i].value << '\n';
    }
}

int main()
{
    nameValue();
    printData();
    return 0;
}