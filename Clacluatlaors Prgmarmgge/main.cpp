#include <iostream>
#include <cmath>

using namespace std;

float ConvertRadiansToDegrees(float x);

int main()
{
    int selection = 0;
    float x = 0.0f;
    float y = 0.0f;
    
    while(selection != 12){
       
      
        cout << "1) cos(x), 2) sin(x), 3) tan(x), 4) atan2(y, x), 5) sqrt(x), 6) x^y, 7) ln(x), 8) e^x, 9) |x|, 10) floor(x), 11) ceil(x), 12) Exit." << endl; 
        cout << "Enter a number to make your selection" << endl;
        cin >> selection;
        
        switch(selection){
            
            case 1:
                cout << "Enter x: ";
                cin >> x;
                cout << "Cos(" << x << ") = " << ConvertRadiansToDegrees(cosf(x)) << endl; 
                break;
        
            case 2:
                cout << "Enter x: ";
                cin >> x;
                cout << "Sin("<< x << ") = " << ConvertRadiansToDegrees(sinf(x)) << endl;
                break;
                
            case 3:
                cout << "Enter x: ";
                cin >> x;
                cout << "Tan(" << x << ") = " << ConvertRadiansToDegrees(tanf(x)) << endl;
                break;
                
            case 4:
                cout << "Enter x: ";
                cin >> x;
                cout << "Enter y: ";
                cin >> y;
                cout << "atan2(" << x << "," << y << ") = " << atan2f(y,x) << endl;
                break;
            
            case 5:
                cout << "Enter x: ";
                cin >> x;
                cout << "Sqrt(" << x << ") =" << sqrtf(x) << endl;
                break;
                
            case 6:
                cout << "Enter x: ";
                cin >> x;
                cout << "Enter y: ";
                cin >> y;
                cout << x << "^" << y << " = " << powf(x,y) << endl;
                break;
                
            case 7:
                cout << "Enter x: ";
                cin >> x;
                cout << "Ln(" << x << ") = " << logf(x) << endl;
                break;
            
            case 8:
                cout << "Enter x: ";
                cin >> x;
                cout << "e^" << x << " = " << expf(x) << endl;
                break;
                
            case 9:
                cout << "Enter x: ";
                cin >> x;
                cout << "|" << x << "| = " << fabsf(x) << endl;
                break;
                
            case 10:
                cout << "Enter x: ";
                cin >> x;
                cout << "floor(" << x << ") = " << floorf(x) << endl;
                break;
                
            case 11:
                cout << "Enter x: ";
                cin >> x;
                cout << "ceil(" << x << ") = " << ceilf(x) << endl;
                break;
                
            case 12:
                cout << "Goodbye" << endl;
                break;
                
            default:
                break;
        }
    
        
    }
    
    return 0;
}

float ConvertRadiansToDegrees(float x){
       return x * (180/3.14f);
}