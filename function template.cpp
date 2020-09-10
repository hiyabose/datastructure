
#include <iostream>
using namespace std;

template<class X>
X big(X a, X b)
{
    if (a > b)
        return (a);
    else
        return(b);
}

int main()
{
    std::cout << "Hello World! I am Hiya\n";
    std::cout << big(3, 19);
    std::cout << big(3.8, 1.9);
   

}
