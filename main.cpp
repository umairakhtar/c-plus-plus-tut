#include <iostream>

using namespace std;

class Temperature{
public:
    void coolSaying(){
        cout << "It's hot today";
    }
};

int main()
{
    Temperature t;
    t.coolSaying();
    return 0;
}
