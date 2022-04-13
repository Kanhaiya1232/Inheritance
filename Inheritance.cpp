// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Student
{
    protected:
    int roll_no;
    public:
    void set_roll_no(int);
    void get_value();
};
class Exam:public Student
{
    public:
    float math,english;
    void set_values(float,float);
    void pdata();
};
class result:public Exam
{
    float per;
    public:
    void get_per();
};
//**************student****************
void Student::set_roll_no(int x)
{
    roll_no=x;
};
void Student::get_value()
{
    cout<<"Roll No"<<roll_no<<endl;
};
//***********Examination*****************
void Exam::set_values(float x,float y)
{
    math=x;
    english=y;
};
void Exam::pdata()
{
    cout<<"math"<<math<<endl;
    cout<<"English"<<english<<endl;
};
//******************result*******************
void result::get_per()
{
    //set_values(75,75);
    float per,sum;
    sum=math+english;
    per=sum/2;
    cout<<"sum"<<sum<<endl;
    cout<<"per"<<per<<endl;
};
int main()
{
    result obj;
    obj.set_roll_no(202);
    obj.get_value();
    obj.set_values(70.0f,80.0f);
    obj.pdata();
    obj.get_per();
    return 0;
}