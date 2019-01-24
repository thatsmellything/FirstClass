//
//  Controller.cpp
//  FirstClass
//
//  Created by Judkins, Jensen on 1/24/19.
//  Copyright © 2019 Judkins, Jensen. All rights reserved.
//

#include "Controller.hpp"

Controller :: Controller()
{
    this->specialNumber = 18;
}

void Controller :: start()
{
    cout << "This is in the start method" << endl;
    cout << "This is some more text than Mr.H wanted me to add" << endl;
    cout << "Here is the class number " << specialNumber << " I think it is really COOL!!!" << endl;
    string input;
    cout << "Please type your name" << endl;
    getline(cin, input);
    cout << input + " nice name" << endl;
}
