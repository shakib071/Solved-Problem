#include<iostream>
#include<cstdio>
#include<set>
#define N 300000
using namespace std;
int read()
{
	char c=0;
	int sum=0;
	while (c<'0'||c>'9') c=getchar();
	while ('0'<=c&&c<='9') sum=sum*10+c-'0',c=getchar();
	return sum;
}
int T,n,lg[N+1],r[N+1],delta[N+1],nt[N+1],cl[N+1],length;
bool used[N+1],vis[N+1],vst[N+1];
set<int>s;
int calc(int x)
{
	int scnt=0;
	s.clear();
	for (int i=1;i<=n;++i) vst[i]=vis[i];
	for (int i=n;i>=1;--i)
	{
		if (used[i])
		{
			scnt++;
			if (delta[i]==n+1)
			{
				if (!s.empty()&&scnt<=x)
				{
					auto it=s.end();
					it--,nt[i]=(*it),s.erase(it);
				}
				else nt[i]=n+1;
			}
			else
			{
				auto it=s.lower_bound(delta[i]+1);
				if (it!=s.begin()) it--,nt[i]=(*it),s.erase(it);
				else return 1;
			}
		}
		if (!vst[i]) s.insert(i);
	}
	for (int i=1;i<=n;++i)
		if (nt[i])
			vst[nt[i]]=1;
	for (int i=1;i<=n;++i)
		if (!vst[i]&&i>r[1])
			return -1;
	return 0;
}
int main()
{
	bool op;
	int cnt,x;
	for (int i=2;i<=N;++i) lg[i]=lg[i>>1]+1;
	T=read();
	while (T--)
	{
		n=read(),op=1,length=0;
		for (int i=0;i<=n;++i) used[i]=vis[i]=0;
		for (int i=1;i<=n;++i) r[i]=read();
		for (int i=1;i<=n-1;++i)
			if (r[i]>r[i+1])
				op=0;
		if (r[1]==n+1) op=0;
		if (!op)
		{
			puts("No");
			continue;
		}
		nt[0]=r[1],nt[n]=n+1,vis[r[1]]=1;
		for (int i=1;i<=n-1;++i)
		{
		    if (r[i+1]==r[i]) used[i]=1,delta[i]=r[i+1];
			else
			{
				nt[i]=r[i+1];
				if (nt[i]!=n+1) vis[nt[i]]=1;
			}
		}
		x=cnt=0;
		for (int i=1;i<=n;++i)
			if (used[i]&&delta[i]==n+1)
				cnt++;
		for (int i=lg[cnt];i>=0;--i)
			if (x+(1<<i)<=cnt&&calc(x+(1<<i))<=0)
				x+=(1<<i);
		if (calc(x)!=0) op=0;
		if (!op)
		{
			puts("No");
			continue;
		}
		puts("Yes");
		for (int i=n;i>=1;--i)
		{
			if (nt[i]==n+1) cl[i]=++length;
			else cl[i]=cl[nt[i]];
		}
		for (int i=1;i<=n;++i) printf("%d ",cl[i]);
		puts("");
	}
	return 0;
}
