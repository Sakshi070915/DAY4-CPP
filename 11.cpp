#include <iostream>
using namespace std;

int main()
{
    int x=5;

    //The statement incremented 1
    cout<<"x++ is "<<x++<<endl;
    
    //This statement incremented 1
    //from already incremented
    //statement resulting in
    //Incrementing of 2
    cout<<"++x is "<<++x<<endl;

    int y = 10;
    
    //This statementDecremented 1
    cout<<"y-- is "<<y--<<endl;
    

    //This statement Decremented 1
    //from already Decremented
    //statment resluting in 
    //Decrementing of 2
    cout<<"--y is "<<--y<<endl;

    return 0;
}