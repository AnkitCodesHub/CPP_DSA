#include <iostream>
#include <string>
using namespace std;

class ABC{
    public:
    ABC(){
    cout << "constructor\n";
    }
    ~ABC (){
        cout << "destructor\n";
    }
};

int main()

// jaise hi if se bahar nikelege haamara fn destruct ho jaega 
{
    if (true)
    {
     static ABC obj;   
    }
    cout <<"end of main func\n";
 return 0;
} 