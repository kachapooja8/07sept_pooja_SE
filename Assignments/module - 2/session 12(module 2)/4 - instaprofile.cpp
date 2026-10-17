#include<stdio.h>
struct bio
{
	char desc[30];
	int age;
};
struct insta{
	char usnm[10];
	int flw;
	struct bio b;
};
main()
{
	struct insta i={"Pooja",800,"Travel lover",20};
	printf("\nUsername:%s",i.usnm);
	printf("\nFollower:%d",i.flw);
	printf("\nDescription:%s",i.b.desc);
	printf("\nAge:%d",i.b.age);
}
