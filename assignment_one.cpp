/*******************************************************
 |Program Filename: Simple Math
 |Author: Thomas Snyder
 |Date: 1/10/18
 |
 |Description: This program is designed to print to the 
 |terminal after performing basic math on a predetermined
 |set of numbers 
 |
 |Input: none
 |Output: text to terminal
 ******************************************************/


/* 
 *
 * The code used to change the color of the terminal:
 * 
 * "\33[32;40m" to open and "\33[0m" to close
 *
 * is from stackoverflow.com and wordpress.com by
 * Thomas and Ahwan Patnaik respectively. 
 * Links:
 * http://bit.ly/2DhPyNF
 * http://bit.ly/2D1hgBm
 *
 * "\33[32;40m" changes the foreground to red and background to black.
 * The \33 is the ascii oct ESC key and allows for the "Control Sequence
 * introducer" to change the color. The color codes are the numbers, 32 
 * for green and 40 for black, separated by a ';'. In the closing statement,
 * \33 is the same ANSI escape for control sequence for c++ to interact
 * with the system terminal colors and the 0 resets the normal colors. 
 *
 * see http://bit.ly/2APZQ4F for more on the ANSI escape sequences
 *
 */


#include <math.h>   /*math operations*/
#include <iostream> /*cout*/
using namespace std;


int main()
{
    //for cos(2/3)
    cout << "Find the cosine of two divided by three \n";
    double a = 2.0 / 3.0; //declare new double a
    cout << "Two divided by three is " << a << "\n";
    cout << "So, cos(2/3) is " << "\33[32;40m" << cos(a) << "\33[0m\n\n";
    

    //for sin(2/3)
    cout << "Find two times the sine of two divided by three \n";
    cout << "Two divided by three is " << a << "\n";
    double b = sin(a); //declare new double b
    cout << "So, sin(2/3) is " << b << "\n";
    cout << "And two times that is " << "\33[32;40m" << b*2 << "\33[0m\n\n";


    //for tangent(-3/4) 
    cout << "Find the tangent of negative three divided by four \n";
    a = -3.0 / 4.0; //change a for new use
    cout << "Negative three divided by four is " << a << "\n";
    cout << "So, tan(-3/4) is " << "\33[32;40m" << tan(a) << "\33[0m\n\n";


    //for log base 10 of 55
    cout << "Find log base ten of fifty five \n";
    cout << "log10(55) is " << "\33[32;40m" << log10(55) << "\33[0m\n\n";


    //for natural log of 60
    cout << "Find the natural log of sixty\n";
    cout << "ln(60) is " << "\33[32;40m" << log(60) << "\33[0m\n\n";
    

    //for log base 2 of 15
    cout << "Find the log base 2 of 15 \n";
    cout << "Using log base b of a = (log a) / (log b)\n";
    a = log(15); //change the a value
    b = log(2); // change b value
    cout << "log(a) is " << a << "\n";
    cout << "log(b) is " << b << "\n";
    cout << "So, log base 2 of 15 is " << "\33[32;40m" << a / b << "\33[0m\n\n";
    

    //for log base 4 of 40
    cout << "Find the log base 4 of 40 \n";
    cout << "Using the same formula as above \n";
    a = log(40); //change the a value for new use
    b = log(4); //change b value
    cout << "log(a) is " << a << "\n";
    cout << "log(b) is " << b << "\n";
    cout << "So, log base 4 of 40 is " << "\33[32;40m" << a / b << "\33[0m\n\n";


    //for 3^sin(x)
    double x = 1; //declare x so it can be used twice without redeclaration
    cout << "Find 3^sin(x), where x = 1, x = 10, and x = 100 \n";
    for( x; x <= 100; x *= 10 )
    {//for loop allows me to write a couple lines to complete more repetetive operations
        cout << "With sin(" << x << ") is " << sin(x) << "\n";
        cout << "3 raised to this is then " << "\33[32;40m" << pow(3, sin(x)) << "\33[0m\n\n"; 
    }
    x = 1; //reset x


    //for log base 2 of (x^2 + 1)
    cout << "Find log base 2 of (x^2 + 1) where x = 1, x = 10, and x = 100 \n";
    cout << "Using log base b of a = (log a) / (log b)\n";
    for( x; x <= 100; x *= 10 )
    {//for loop allows me to do this repetitive process once and let the cpu do the rest
        a = pow(x, 2) + 1; //change a value
        cout << "With (" << x << "^2 + 1) is " << a << "\n";
        a = log(a); //store original a into new a
        b = log(2); //change b value
        cout << "log(" << x << "^2 + 1) is " << a << "\n";
        cout << "log(2) is " << b << "\n";
        cout << "So, log(" << x << "^2 + 1) / log(2) is " << "\33[32;40m" << a / b << "\33[0m\n\n";
    } 
    

    return 0;
}
