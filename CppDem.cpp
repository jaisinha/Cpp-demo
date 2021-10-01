#include <iostream>
using namespace std;
int main()
{
    int nooffamilymembers;
    cin>>nooffamilymembers;
    for(int i=nooffamilymembers;i>=1;i--)
    {
        for(int j=1;j<=nooffamilymembers;j++)
        cout<<i<<" ";
        cout<<endl;
    }
	return 0;
}
