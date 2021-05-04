#include <iostream>
#include <math.h>
#include <cassert>
#include <string>
using namespace std;

int main()
{
    /*Testing ints*/
    int a=2;
    int b=2;
    int c=4;
    assert((a+b)==c);

    /*Testing bools*/
    bool d=true;
    bool e=true;
    bool f=false;

    assert(((d and e)==true) or f==true);
    
    /*Testing char*/
    char g='x';
    
    assert(g!='y');
    
    /*Testing unsigned*/
    unsigned h=3;
    assert(h>=3);

    /*Testing strings*/

    string i="caballo";
    
    assert(i.length()>=5);

    




    return 0;
}


