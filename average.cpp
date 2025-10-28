#include <iostream>
using namespace std;

int main()
{
    int math;
    int gmath;
    int cmath;


    cout<<"Math marks :" <<endl;
    cin>>math;

    cout<<"gMath marks :" <<endl;
    cin>>gmath;

    cout<<"cMath marks :" <<endl;
    cin>>cmath;


    double avg;
    avg=(math+gmath+cmath)/3;
    cout<<"Overall Math marks :" <<endl;

    cout<<avg;

}
