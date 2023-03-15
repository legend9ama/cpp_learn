#include <iostream>

using namespace std;

namespace first{
    int x=1;
}

namespace second{
    int x=2;
}

int main(){
    int x=0;
    using namespace first;

    cout<<x;

    return 0;
}
