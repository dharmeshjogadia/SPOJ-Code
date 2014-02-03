/*

	SPOJ Classical Problem
	2727. Army Strength
	Code: ARMY
	URL:www.spoj.com/problems/ARMY/
 */

#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n,t,lNG,lNM,maxNG,maxNM;
    scanf("%d",&t);

    while(t--)
    {
        printf("\n");
        scanf("%d %d",&lNG,&lNM);
        maxNG=0;
        maxNM=0;
        while(lNG--)
        {
            scanf("%d",&n);
            if(maxNG<n)
                maxNG=n;

        }

        while(lNM--)
        {
            scanf("%d",&n);
            if(maxNM<n)
                maxNM=n;

        }
        if(maxNG>=maxNM)
            printf("Godzilla\n");
        else
            printf("MechaGodzilla\n");
    }
    return 0;
}

