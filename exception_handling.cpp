/*22070123132 */
#include<iostream>
using namespace std;
class test
{
    public:
    test()
    {
        cout<<"Default const called: "<<endl;
    }
    public:
    ~test()
    {
        cout<<"Default dest called: "<<endl;
    }
};
int main()
{
    try{
        test t1;
        throw 10;
    }
    catch(int x)
    {

    }
}
