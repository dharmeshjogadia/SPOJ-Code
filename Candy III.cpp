/*candy3 */
#include<iostream>
using namespace std;

int main()
{
        int t;
        unsigned long noOfStud,n,sum,i;
        cin>>t;
        while(t)
        {
            cin>>noOfStud;
            i=1;
            sum=0;
            while(i<=noOfStud)
            {
                cin>>n;
                sum=((sum+n)%noOfStud);
                i++;
            }
            if(sum)
                cout<<"NO\n";
            else
                cout<<"YES\n";
            t--;
        }
    return 0;
}
