#include "Logger.h"
#include <iostream>
#include "Properties.h"
#include "Properties.cpp"
using namespace std;

Properties properties;

//Constructor:
Logger::Logger() {

}

//Init:
void Logger::init() {
    cout << "localsrc - " + properties.version << endl;
}

//Help:
void Logger::help() {
    
}