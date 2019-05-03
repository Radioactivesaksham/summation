//purpose:- take 2 fractions and add them together.
// step 1 find lcm of denominators
using namespace std;
class Fraction
{
private:
int numerator;
int denominator;
int lcm;
public:
Fraction(int numerator,int denominator)
{
this->numerator= numerator;
this->denominator= denominator;
}
int lcms(Fraction &f2)
{
int lcm = (f2.denominator) * ((*this).denominator); 
int smaller = f2.denominator > this->denominator ? this->denominator : f2.denominator;   
for(int i=smaller; i>1; smaller--)
{
if (f2.denominator%i==0 && this->denominator%i==0)   
return i;
else 
return lcm;
}
}
void print(int up, int low){
cout<<"The sum of fraction is "<<up<<"/"<<low<<endl; 
}
int sum(Fraction &f2)
{
int a = lcms(f2);
int upper= a*this->numerator + a*f2.numerator; 
print(upper,a);
return 0;
}

};
