/*
问题描述：
有这样一道智力题：“某商店规定：三个空汽水瓶可以换一瓶汽水。小张手上有十个空汽水瓶，她最多可以换多少瓶汽水喝？”
答案是5瓶，方法如下：先用9个空瓶子换3瓶汽水，喝掉3瓶满的，喝完以后4个空瓶子，用3个再换一瓶，喝掉这瓶满的，这时候剩2个空瓶子。
然后你让老板先借给你一瓶汽水，喝掉这瓶满的，喝完以后用3个空瓶子换一瓶满的还给老板。如果小张手上有n个空汽水瓶，最多可以换多少瓶汽水喝？

有n个空汽水瓶，3个能换1瓶汽水
当n<2时，不满足换瓶子的条件
当n=2时，依旧能和老板借1瓶汽水，喝完了得到的空瓶在兑1瓶还给老板
当n>=3时，可以兑换，兑换后空瓶数量n-3
由于换来的汽水喝完后又得1个空瓶，瓶数量n+1;
那么归根结底，换一次，空瓶的数量变化是n-2

输入例子:
3
10
81
0

输出例子:
1
5
40

*/
#include<iostream>
using namespace std;
int num = 0;
 
void fun(int n){
	if(n<2){
		return ;
	}
	else{
		if(n==2){
			num++;
		}
		if(n>=3){
			num++;
			fun(n-2);
		}
	}
}
 
 
int main(){
	int n;
	 while(cin>>n){
	 	fun(n);
		cout<<num<<endl;
		num = 0;
	 }
	
	return 0;
}
