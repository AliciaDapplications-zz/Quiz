//
//  main.cpp
//  QUIZZ
//
//  Created by Alicia Dale on 4/7/16.
//  Copyright © 2016 Alicia Dale. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;


int main(int argc, const char * argv[]) {
    // DECLARE THE VARIALBES TO BE USED IN THE PROJECT
    string answer;
    
        //DISPLAY THE QUESTION 1 ON THE CONSOLE
    cout << "Q1-Every Statement in C++ language must terminate with: \n";
    cout << "\t a. Semi Colon ; ";
    cout << "\t b. Comma , ";
    cout << "\t c. Period . ";
    cout << "\t d. Question Mark ? ";
    cout << endl;
    cout << endl;
    
        //PROMPT THE USER TO ENTER THE LETTER (A, B, C, D) FOR CORRECT ANSWER
    cout << "Enter the letter (a, b, c, d) for correct Answer: ";
    
        //READ THE USER ANSWER FROM THE CONSOLE
    cin >> answer;
    
        //CHECK IF THE ANSWER IS CORRECT ANSWER 'A'
    if (answer == "a" || answer == "A")
    {
        cout << "Your answer " << answer << " is Correct.";
    }
    else
    {
        cout << "Your answer " << answer << " is Wrong.";
        
    }
    cout << endl;
    cout << "**********************\n\n";
    
            return 0;
}
