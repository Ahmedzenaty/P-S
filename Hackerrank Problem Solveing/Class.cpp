#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Student {
    public:
   int age;
    int standard;
    string first_name;
    string last_name;
 Student(int age,int standard,string first_name,string last_name)
{
    this ->age = age;
    this ->standard = standard;
    this ->first_name = first_name;
    this ->last_name=last_name;

}
    void set_age(int a)
    {
        a = age;
    }

    int get_age()
    {
        return age;
    }
    void set_standard(int stat)
    {
        stat = standard;
    }
    int get_standard()
    {
        return standard;
    }
    void set_first_name(string first)
    {
        first = first_name;
    }
    string get_first_name()
    {
        return first_name;
    }
    void set_last_name(string last)
    {
        last = last_name;
    }
    string get_last_name()
    {
        return last_name;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st(age,standard,first_name,last_name);
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << age << ',' << first_name << ',' << last_name <<',' << standard;
    return 0;
}
