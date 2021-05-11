// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: May 2021
// This program add integers using a while loop

#include <iostream>
#include <string>

int main() {
    // this function add integers using a while loop
    std::string integerAsString;
    int integerAsNumber;
    int loopCounter = 0;
    int sum = 0;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> integerAsString;
	std::cout << "" << std::endl;

	// process and output
	try {
	    integerAsNumber = std::stoi(integerAsString);
	    if (integerAsNumber > 0) {
	        while (loopCounter <= integerAsNumber) {
	            sum = sum + loopCounter;
	            loopCounter = loopCounter + 1;
	        }
	        std::cout << "The sum of all positive numbers is " << sum;
	    } else {
	        std::cout << "This year is negative number";
	    }
	} catch (std::invalid_argument) {
	    std::cout << "That was not valid input.";
	}
}
