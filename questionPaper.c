#include<stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    return n*(fact(n-1));
}
int ncr(int n , int r)
{
    if(n<0 || r<0)
        return 0;
    return (fact(n)/(fact(r)*fact(n-r)));
}
int main()
{
    int x,y,z,s,m,c;
    char q1,q2,q3;
    scanf("%d %d %d %d %d %d",&x,&s,&y,&m,&z,&c);
    scanf(" %c %c %c",&q1,&q2,&q3);
    int total_ways = ncr(x,s)*ncr(y,m)*ncr(z,c);
    printf("%d\n",total_ways);
    int mx = 0,my=0,mz=0,nx=0,ny=0,nz=0,kx=0,ky=0,kz=0;
    int q_num = q1-'A'+1;
    if(q_num <= x)
        mx+=1;
    else if(q_num <=(x+y))
        my+=1;
    else
        mz+=1;
    q_num = q2-'A'+1;
    if(q_num <= x)
        mx+=1;
    else if(q_num <=(x+y))
        my+=1;
    else
        mz+=1;
    total_ways -= ncr(x-mx,s-mx)*ncr(y-my,m-my)*ncr(z-mz,c-mz);
    q_num = q3-'A'+1;
    if(q_num <= x)
        nx+=1;
    else if(q_num <=(x+y))
        ny+=1;
    else
        nz+=1;
    total_ways -= ncr(x-nx,s-nx)*ncr(y-ny,m-ny)*ncr(z-nz,c-nz);
    kx=mx+nx;
    ky = my+ny;
    kz=mz+nz;
    total_ways+=ncr(x-kx,s-kx)*ncr(y-ky,m-ky)*ncr(z-kz,c-kz);
    printf("%d",total_ways+1);

}