//
//  main.cpp
//  A1
//
//  Created by AMIR HAKIM on 2014-05-10.
//  Copyright (c) 2014 AMIR HAKIM. All rights reserved.
//

#include <iostream>
#include <string>
#include "WordList.h"
using std::cout;
using std::endl;
using std::string;


int main()
{
    cout << "main" << endl;
    string file="/Users/genevievechagnon/A1/A1/input.txt";
    WordList w1(file);
    w1.printList();
    return 0;
}

