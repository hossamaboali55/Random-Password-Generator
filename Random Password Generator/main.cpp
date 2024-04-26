#include <iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;

int main()
{
    while(1)
    {
        int length,i;
        string password;
        cout<<"Enter The length of Password"<<endl;
        cin>>length;
        const string charset="asdfghjklzxcvbnmqwertyuiopASDFGHJKLQWERTYUIOPZXCVBNM@#$%^&*()_+";
        srand(time(NULL));

        for(i=0; i<length; i++)
        {

            int index=rand()%charset.length();
            password+=charset [index];


        }


        cout<<"Generated Password\n"<<password<<endl;
        cout<<"\n"<<endl;
    }

    return 0;
}
