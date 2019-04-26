#include <bits/stdc++.h>
using namespace std;
struct node{
    int visit;
    int v;
}a[100005];
int main()
{
    int n;
    int left=0,right=0;
    int a1=1,a2=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i].v);
        a[i].visit=0;
    }
    int m=n-2;
    int k=1;
    left=a[0].v;
    right=a[n-1].v;
    for(int i=0;i<n;i++)
    {
        if(left<=right&&a[k].visit==0)
        {
            left+=a[k].v;
            a[k].visit=1;
            k++;
            a1++;
        }else if(left>right&&a[m].visit==0){
            right+=a[m].v;
            a[m].visit=1;
            m--;
            a2++;
        }
    }
    if(n==1)
    printf("1 0\n");
    else if(n==2)
    printf("1 1\n");
    else
    printf("%d %d\n",a1,a2);
    return 0;
}



