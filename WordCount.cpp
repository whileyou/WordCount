#include <bits/stdc++.h>
using namespace std;
char *file;
int count_char()
{
	int cnt=0;
	char c=0;
	while(~scanf("%c",&c)) cnt++;
	return cnt;
}
int count_word()
{ 
	int cnt=0,flag=1;
	char c=0;
	while(~scanf("%c",&c)){
		if(c!=' '&&c!=','&&flag) cnt++,flag=0;
		if(c==' '||c==',') flag=1;
	}
	return cnt;
}
int main(int argc,char **argv)
{
	file=argv[2];
	freopen(file,"r",stdin); // �ض������
	if(strcmp(argv[1],"-c")==0){ // ��ѯ�ַ�
		printf("�ַ���: %d\n" , count_char());
	}
	else printf(" ������: %d\n", count_word());
	return 0;
}

