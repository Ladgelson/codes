#include <bits/stdc++.h>
using namespace std;

void impedido(int ata, int gol,int zag){
    if(ata < zag && ( ata >= gol || ata < gol)){
        cout << "Y\n";
    } else {
        if(ata == zag || (ata == zag && ata == gol) || (ata > gol && ata > zag)){
            cout << "N\n";
        }
    }
}

int main(){
    int atacantes, zagueiros;
    while(scanf("%d%d",&atacantes,&zagueiros)){
        if(atacantes == 0 && zagueiros == 0)break;
        int ata[atacantes],zag[zagueiros];
        for(int i = 0; i < atacantes;i++)
            scanf("%d",&ata[i]);
        for(int i = 0; i < zagueiros;i++)
            scanf("%d",&zag[i]);
        sort(ata,ata+atacantes);
        sort(zag,zag+zagueiros);
        impedido(ata[0],zag[0],zag[1]);
    }  
    return 0;
}