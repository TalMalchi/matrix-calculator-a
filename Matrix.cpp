
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

#include "Matrix.hpp"
using namespace zich;


     
        //vector<double> m={1,2,3,4};
        ostream& zich::operator<<(ostream &a, const zich::Matrix &b){
            return a;

        }
        istream& zich::operator>>(istream &a, zich::Matrix &b){
            return a;
        }

        //6 math operators
        Matrix zich::operator+(const zich::Matrix &a, const zich::Matrix &b){
            return a;
            
        }
        Matrix zich::operator+=(const zich::Matrix &a, const int b){
            return a;

        }
        Matrix& zich::Matrix::operator+(const zich::Matrix &a){
            return *this;

        }
        Matrix zich::operator-(const zich::Matrix &a, const zich::Matrix &b){
            return a;

        }
        Matrix& zich::Matrix::operator-=(const zich::Matrix &a){
            return *this;

        }
        Matrix zich::operator-(const zich::Matrix &a){
            return a; 

        }

        //6 equals operators
        bool zich::operator==(const zich::Matrix &a,const zich::Matrix &b){
            return true; 
        }
        bool zich::operator!=(const zich::Matrix &a,const zich::Matrix &b){
            return true;
        }
        bool zich::operator<=(const zich::Matrix &a,const zich::Matrix &b){
            return true;
        }
        bool zich::operator<(const zich::Matrix &a,const zich::Matrix &b){
            return true;
        }
        bool zich::operator>=(const zich::Matrix &a,const zich::Matrix &b){
            return true;
        }
        bool zich::operator>(const zich::Matrix &a,const zich::Matrix &b){
            return true;
        }

        //multiplications
        Matrix Matrix::operator*( const zich::Matrix &b){
            return b;

        }
        Matrix zich::operator*(const double b, const zich::Matrix &a){
            return a;
        }
       
        Matrix& Matrix::operator*=(double){
            return *this;
        }


        //increcment decrecment 
        Matrix Matrix::operator++(int){
            return Matrix();
        }
        Matrix& Matrix::operator++(){
            return *this;
        }
        
        Matrix Matrix::operator-- (int){
            return Matrix();
        }
        Matrix& Matrix::operator--(){
            return *this;
        }

