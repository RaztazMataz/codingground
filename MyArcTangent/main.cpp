
#include <iostream>
#include <cmath>
using namespace std;

float MyArcTangent(float y, float x);


int main(){

	cout << "MyArcTangent( 4,  2) = " << MyArcTangent( 4,  2) << endl;
	cout << "MyArcTangent( 5, -1) = " << MyArcTangent( 5, -1) << endl;
	cout << "MyArcTangent(-4, -6) = " << MyArcTangent(-4, -6) << endl;
	cout << "MyArcTangent(-6,  4) = " << MyArcTangent(-6,  4) << endl;


}


float MyArcTangent(float y, float x){
    float result = 0.0f;
    float PI = 3.14;
    result = atanf( y / x );
    result *= (180 / PI);
    if(x < 0){
        result += 180;
    }
   
    return result;
}
    
