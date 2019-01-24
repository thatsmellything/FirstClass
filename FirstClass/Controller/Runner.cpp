//
//  Runner.cpp
//  FirstClass
//
//  Created by Judkins, Jensen on 1/24/19.
//  Copyright © 2019 Judkins, Jensen. All rights reserved.
//

#include "COntroller.hpp"

int main()
{
//    Controller myFirstController;
//    myFirstController.start();
  
    
    //pointer version------
    Controller * myPointer = new Controller();
    myPointer->start();
    
    
    return 0;
}
