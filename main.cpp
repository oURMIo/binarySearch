#include <stdlib.h>
#include <iostream>

using namespace std;

#define  M  10


int mas[M];
// test VCS
int main()
{
    int i,ch,p,exs;
    for (i = 0; i < M; i++)
    {
        mas[i] = i + 1;
    }

	for (i = 0; i < M; i++)
	{
		cout << mas[i] << " ";
	}
	cout<<endl<<"введи число : ";

    cin >> ch;

    do
    {
        p = M / 2;
        if (ch <= mas[p])
        {
            p=p-p/2;
            if(ch==p)
            {
                exs=1;
            }
        }
        else
        {
            p=p+p/2;
            if(ch==p)
            {
                exs=1;
            }
        }
    } while (exs==1);


//    system("pause");
//    return 0;
}
