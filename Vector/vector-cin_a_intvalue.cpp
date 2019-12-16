#include<vector>
#include<iostream>
using namespace std;

int main()
{
    vector<int> vInt;
    int i;
    char cont='y';
    cout<<"ENTER A NUMBER:";
    while(cin>>i)
    {
        vInt.push_back(i);
        cout<<"DO You Want To Go On?(y or n)"<<endl;
        cin>>cont;
        if(cont!='y'&&cont!='Y'&&cont!='Y'&&cont!='y')
            break;
        else
        {
            if(cont=='y'|cont=='Y')
                cout<<"ENTER A NUMBER:";
            continue;
        }
        
    }
    for(auto mem:vInt)     //遍历vInt中的所有值
        cout<<mem<<" ";    //注意这种写法
    cout<<endl;            //vector中的输出写法
    
    system("PAUSE");
    return 0;
}
