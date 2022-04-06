#include <iostream>
#include <vector>
using namespace std;




namespace zich
{
    class Matrix
    {
    private:
        vector<double> arr;
        int col;
        int row;

    public:
        
        Matrix(){};
        

        Matrix(vector<double> arr, unsigned int col, unsigned int row){}
    
        
        friend ostream &operator<<(ostream &a, const Matrix &b);
        friend istream &operator>>(istream &a, Matrix &b);

        // 6 math operators
        friend Matrix operator+(const Matrix &a, const Matrix &b);
        friend Matrix operator+=(const Matrix &a, const int b);
        Matrix &operator+(const Matrix &a);
        friend Matrix operator-(const Matrix &a, const Matrix &b);
        Matrix &operator-=(const Matrix &a);
        friend Matrix operator-(const Matrix &a);

        // 6 compartion operators
        friend bool operator==(const Matrix &a,const Matrix &b);
        friend bool operator!=(const Matrix &a,const Matrix &b);
        friend bool operator<=(const Matrix &a,const Matrix &b);
        friend bool operator<(const Matrix &a,const Matrix &b);
        friend bool operator>=(const Matrix &a,const Matrix &b);
        friend bool operator>(const Matrix &a,const Matrix &b);

        // multiplications
        Matrix operator*(const Matrix &b);
        friend Matrix operator*(const double b, const Matrix &a);
        Matrix &operator*=(double);

        // increcment decrecment
        Matrix operator++(int); // postfix
        Matrix &operator++();   // prefix
        Matrix operator--(int); // postfix
        Matrix &operator--();  // postfix
        


        
    };

    

}
