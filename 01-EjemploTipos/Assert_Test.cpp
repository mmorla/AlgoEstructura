#include <cmath>
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
    assert(3u>=3u);

    /*Testing strings*/
    assert(string("caballo").length()>=5);
    assert(string("Coca")+string("Cola")=="CocaCola");
  
    /*Testing Double*/  
    assert((3,3.33*3)==9.99);
    assert((0.1+0.1)==0.2);
    assert((1.0/2.0)==0.5);
    assert((1.0)==(0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1));
    return 0;
}
