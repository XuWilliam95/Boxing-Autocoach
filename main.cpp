#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <time.h>
using namespace std;



int main() {

string strike_type[6] = {"jab", "cross", "lead hook", "rear hook", "lead uppercut", "rear uppercut"};
string strike_loc[2] = {"head", "body"}; 

srand( time(NULL));

int pick_strike = rand() % 6;
int pick_loc = rand() % 2;



cout << strike_type[pick_strike] <<" "<< strike_loc[pick_loc]<< "\n";

}
