//Create a class containing a recursive function which will sum up to n natural numbers.

#include <iostream>

using namespace std;

class Summer{
    int n;
public:
    
    int sum(int n){
        if(n==0 ){
            return 0;
        }
        return n + sum(n-1);
    }
};

int main()
{
    Summer obj;
    int l = obj.sum(5);     //used 5  only as a example
    cout<<(l);

    return 0;
}

// output: 15
