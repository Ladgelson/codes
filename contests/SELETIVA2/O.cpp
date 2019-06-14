#include <bits/stdc++.h>
using namespace std;
#define MAXN 100100
#define f first
#define s second
#define pb push_back
#define ins insert
#define er erase
#define lsb(x) ((x) & (-x))

typedef long long ll;
typedef pair<int,int> pii;

int n;

int main(){
    char quarta[8],semi[4],fina[2];
    for(int i=0;i<8;++i){
        int a,b;
        cin >> a >> b;
        if(i==0){
            quarta[i]=(a>b ? 'A':'B');
        }
        if(i==1){
            quarta[i]=(a>b ? 'C':'D');
        }
        if(i==2){
            quarta[i]=(a>b ? 'E':'F');
        }
        if(i==3){
            quarta[i]=(a>b ? 'G':'H');
        }
        if(i==4){
            quarta[i]=(a>b ? 'I':'J');
        }
        if(i==5){
            quarta[i]=(a>b ? 'K':'L');
        }
        if(i==6){
            quarta[i]=(a>b ? 'M':'N');
        }
        if(i==7){
            quarta[i]=(a>b ? 'O':'P');
        }
    }
    for(int i=0;i<4;++i){
        int a,b;
        cin >> a >> b;
        if(i==0){
            semi[i]=(a>b ? quarta[0]:quarta[1]);
        }
        if(i==1){
            semi[i]=(a>b ? quarta[2]:quarta[3]);
        }
        if(i==2){
            semi[i]=(a>b ? quarta[4]:quarta[5]);
        }
        if(i==3){
            semi[i]=(a>b ? quarta[6]:quarta[7]);
        }
    }

    for(int i=0;i<2;++i){
        int a,b;
        cin >> a >> b;
        if(i==0){
            fina[i]=(a>b ? semi[0]:semi[1]);
        }
        if(i==1){
            fina[i]=(a>b ? semi[2]:semi[3]);
        }
    }
    int x, y;
    cin >> x >> y;
    char ans = (x>y ? fina[0]:fina[1]);
    cout << ans << endl;
    return 0;
}

