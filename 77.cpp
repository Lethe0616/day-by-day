#include<iostream>
#include<cstring>

using namespace std;

char s[10][10];//字符数组 
int a[10][10];//标记矩阵 
int minLen;//最短路径 
int totalLen;//当前的路径长度 

int min(int a,int b)//求取两者中的最小值函数 
{
	return a>b?b:a;
}

void dfs(int x,int y)//从起点第一行第二列出发深搜 
{
	if(x<0 || x>=10 || y<0 || y>=10) 
	　　return;//越过数组范围程序返回 
	　　
	if(x==9 && y==8)//满足条件时取得两者中的最小值，也就是迷宫的出口
	{
		minLen=min(minLen,totalLen);
		return;
	}
	
	if(s[x][y]=='#') //遇到#停止搜索
	　　return;
	if(minLen<=totalLen) //找到一条路径的长度总和已经超过当前的已经找到的最短路径，则返回 
	　　return;
	　　
	a[x][y]=1;//标记此位置，表示已经被访问 
	totalLen++;//当前路径长度加一 
	
	if(x-1>=0 && s[x-1][y]=='.' && !a[x-1][y]) //判断a[x-1][y]是否被访问过
	　　dfs(x-1,y);//向上搜索 
	if(x+1<10 && s[x+1][y]=='.' && !a[x+1][y]) 
	　　dfs(x+1,y);//向下搜索 
	if(y-1>=0 && s[x][y-1]=='.' && !a[x][y-1]) 
	　　dfs(x,y-1);//向右搜索 
	if(y+1<10 && s[x][y+1]=='.' && !a[x][y+1]) 
	　　dfs(x,y+1);//向左搜索
	 
	totalLen--;//回退（回溯） 
	a[x][y]=0;//回退 
}

int main()
{
	while(~scanf("%s",s[0]))//~是按位取反，当没有输入的时候退出循环。
	{
		for(int i=1;i<10;i++) 
		scanf("%s",s[i]);//处理输入 
		minLen=1<<30;//定义字符常量minLen并赋一个很大的值。<<为移位运算符（左移运算） 
		totalLen=0;//将走过路径长度置零 
		memset(a,0,sizeof(a));//将标记数组设置为未访问，未访问为零。将a中当前位置后面的a的长度个字节用0替换并返回a
		dfs(0,1);//调用深搜函数，开始计算 
		
		cout<<minLen<<endl;//打印结果 
	}
	return 0;
}

