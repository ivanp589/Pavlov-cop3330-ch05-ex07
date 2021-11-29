#include<iostream>
#include<stdio.h>
#include<cstring>
#include <string>
#include <math.h>

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ivan Pavlov
 */

//chapter 5, ex 7
//There is a problem, though: if b2–4ac is less than zero, then it will fail. 
//Write a program that can calculate x for a
//quadratic equation. Create a function that prints out the roots of a quadratic equation,
// given a, b, c. When the program
//detects an equation with no real roots, have it print out a message. 
//How do you know that your results are plausible? Can
//you check that they are correct?

using namespace std;
int main(){
	int varA,varB,varC;
	double undersqrt,root1, root2;
	cout << "Please enter the value for a: ";
	cin >> varA;
	cout << "Please enter a value for b: ";
	cin >> varB;
	cout << "Please enter a value for C: ";
	cin >> varC;
	
	undersqrt = ((varB*varB)-(4*(varA*varC)));
	if( undersqrt < 0){
		cout << "No real roots"<<endl;
	}
	else{
	
	root1 = ((-varB+sqrt(undersqrt))/2*varA);
		  root2 = ((-varB-sqrt(undersqrt))/2*varA);
		  cout << "First root is "<<root1<<endl;
		  cout << "Second root is "<< root2 << endl;
	}
		  
	
	
	
	
	
	
	
	return 0;
}
