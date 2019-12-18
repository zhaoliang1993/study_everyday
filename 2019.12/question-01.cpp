#include<iostream>
#include<string>
using namespace std;

class Human
{
public:
        Human(string n1, int a, string j){
                this->name = n1;
                this->age = a;
                this->job = j;
        }
        void SetName(string arr){name = arr;}
        void ShowName(){cout << name << endl;}
        void ShowDetil(){
                cout << "my name is " << name << endl;
                cout << "I am " << age << " year old ,"<< endl;
                if (job[0] == 'A' || job[0] == 'E' || job[0] == 'O' || job[0] == 'I')
                        cout << "and I am an " << job <<endl;
                else
                        cout << "and I am a " << job <<endl;
        }
private:
        string name;
        int age;
        string job;
};
int main(int argc, char* argv[])
{
        char arr[20];
        int age;
        char job[20];
        cout << "Set name:";
        cin.getline(arr, 20);
        cin.clear();
        cout << "Set age：";
        cin >> age;
        cout << "Set job:";
        cin.clear();
        cin.getline(job,20);
        Human h1(arr, age, job);
        h1.ShowDetil();
        return 0;
}
