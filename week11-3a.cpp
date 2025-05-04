//week11-3a.cpp SOIT107_ADVENTURE_009_C_C++
#include <stdio.h>
int f(int a,int b){
  if(a<b) return -1;
  if(a==b) return 0;
  if(a>b) return 1;
}
int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d",f(a,b));
	return0;
}



int main(){
  int a, b;cin>>a>>b;
  cout<<f(a,b)<<endl;
 return 0;
}
