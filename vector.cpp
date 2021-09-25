#include<iostream>
using namespace std;
class vector{
    int s;
    float *A;
    
    public:
    void create()
    {
        cout<<"Enter size of vector: ";
        cin>>s;
        A=new float[s];
        for(int i=0;i<s;i++){
            cin>>A[i];
        }
    }
    void modify(){
        int modify_value;
        float m;
        cout<<"Enter location of vector at which value is to be modified: ";
        cin>>modify_value;
        cout<<"Enter modified value: ";
        cin>>m;
        A[modify_value]=m;


    }
    void multiply(){
        int scalar;
        cout<<"Enter scalar value with which you want to multiply vector: ";
        cin>>scalar;
        for(int i=0;i<s;i++){
            A[i]*=scalar;
        }

    }
    void display(){
        cout<<"(";
        for(int i=0;i<s;i++){
            cout<<A[i];
            if(i!=s-1){
                cout<<",";
            }
        }
        cout<<")";
    }
};

int main()
{
    vector v;
    v.create();
    v.modify();
    v.display();
    v.multiply();
    v.display();
    return 0;
}