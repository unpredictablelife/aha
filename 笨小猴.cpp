#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;  //定义一个变长字符串
	cin>>a;  //读入输入
	int maxn = 1;  //初始化字母的最多出现次数
	int minn =a.size();   //初始化字母的最少出现次数

	for (char b:a)  //遍历字符串a中的每个字符赋值给变量b
	{
		int time = 0;  //初始化time
		for (char c:a)  //遍历字符串a中的每个字符赋值给变量c
		{
			if (c == b)  //如果有重复字符，就将time+1
				time++;
		}
		if (time>=maxn)  //如果time比当前最大值还大，就将maxn设置为time
			maxn = time;
		if (time<=minn)  //如果time比当前最小值还小，就将minn设置为time
			minn = time;
	}

	int sum = maxn - minn;
	//将最大值与最小值之差设为sum
	//其实也可以不用专门定义一个变量，本人为了接下来编写的方便，才初始化了这个变量
	int t = 0;

	//如果sum为1或0的话（这两个数既不是质数，又不是合数，下面的代码检测不出来），直接输出“No Answer”
	if (sum==1||sum==0)
		cout << "No Answer\n0" << endl;
	else
	{
		if (sum == 2)  //等于2也需要专门定义，否则下面的for循环无法检测出来（本人专门试验过）
			cout << "Lucky Word\n" << maxn - minn << endl;
		else
		{
		    for (int x = 2; x < sum; x++)  //判断是不是质数
		    {
			    if (sum%x == 0)  //如果sum能被x整除，将t设定为1并跳出循环
			    {
			    	t = 1;
				    break;
			    }

		    }

		    if (t == 0)  //如果t=0，说明它无法被别的数整除，即为质数，输出“Lucky Word”
			    cout << "Lucky Word\n" << maxn - minn << endl;
		    else  //若其不等于0，即此数是合数，输出“No Answer”
			    cout << "No Answer\n0" << endl;
	    }
	}
	getchar(); getchar();  //暂停程序
	return 0;  //程序圆满结束
}

