#include <iostream>
#include <math.h>
#include <cassert>
#include <string>
using namespace std;

int main()
{
    /*Testing ints*/
    assert((2+2)==4);
    assert( ((2+2)-(4*2))<=0 );
    
    
    /*Testing bools*/
    assert(((true and true)==true) or false);
    
    /*Testing char*/
    assert('x'!='y');
    
    /*Testing unsigned*/
    assert(3>=3);

    /*Testing strings*/
    assert("caballo"=="caballo");
    
    /*Testing Double*/  
    assert((3,33*3)==9.99);
    
    return 0;
}
