#include <stdlib.h>
#include <iostream>

using namespace std;

#define  M  100


int mas[M];
// test VCS
int main()
{
    int i,ch,p=M,exs=0;
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
    p = p/ 2;
    do
    {
        if (ch <= mas[p])
        {
            if(ch==p || ch+1==p || ch-1==p)
            {
                cout<<p;
                return 0;

            }
            p=p-p/2;
        }
        else
        {
            if(ch==p|| ch+1==p || ch-1==p)
            {
                cout<<p;
                return 0;

            }
            p=p+p/2;
        }
    } while (exs=1);


//    system("pause");
//    return 0;
}
