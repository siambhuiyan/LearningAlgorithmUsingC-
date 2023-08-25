#include<iostream>
using namespace std;

class fractions{
    private:
        int numerator;
        int denom;

    public:
        fractions(int numerator, int denom ){
            this->numerator = numerator ;
            this->denom = denom;
        }
    void print(){
        cout<<this->numerator<<"/"<<this->denom <<endl;
    }
    void add(fractions f2){
        int lcm = this->denom * f2.denom;
        int x = lcm / this->denom;
        int y = lcm / f2.denom;

        int result = lcm * this->numerator + lcm * f2.numerator;
        
        //store the value
        this->numerator = result;
        this->denom=lcm;
    }
};

int main(){
    return 0;
}
