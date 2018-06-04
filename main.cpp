#include <stdlib.h>
#include <iostream>

using namespace std;

#define  M  10


int mas[M];
// test VCS
int main()
{
    int i,ch,p;
    for (i = 0; i < M; i++)
    {
        mas[i] = i + 1;
    }
    cin >> ch;


    do
    {
        p = M / 2;
        if (ch <= mas[p])
        {
            p=p-p/2;
            if(ch==p)
            {
                break;
            }
        }
        else
        {
            p=p+p/2;
            if(ch==p)
            {
                break;
            }
        }
    } while (i=999);


/*
	for (i = 0; i < M; i++)
	{
		cout << mas[i] << " ";
	}
*/

    system("pause");
    return 0;
}
