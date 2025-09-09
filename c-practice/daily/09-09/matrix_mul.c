#include <stdio.h>
int main() {
    int a[10][10],b[10][10],c[10][10],n,m,p,q;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) scanf("%d",&a[i][j]);
    scanf("%d%d",&p,&q);
    for(int i=0;i<p;i++) for(int j=0;j<q;j++) scanf("%d",&b[i][j]);
    if(m!=p) return 0;
    for(int i=0;i<n;i++) for(int j=0;j<q;j++){ c[i][j]=0; for(int k=0;k<m;k++) c[i][j]+=a[i][k]*b[k][j]; }
    for(int i=0;i<n;i++){ for(int j=0;j<q;j++) printf("%d ",c[i][j]); printf("\n"); }
    return 0;
}

