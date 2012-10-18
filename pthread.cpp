#include <iostream>
#include <pthread.h>
//#include <stdlib.h>
using namespace std;
void *thrfn (void *rtr);
int main()
{
pthread_t thr1,thr2;
int x=5,y=10,z=8,a;
int t1,t2;
t1=pthread_create( &thr1,NULL,thrfn,(void*) m1);
cout<<"\n";
pthread_join(thr1,NULL);
t2=pthread_create( &thr2,NULL,thrfn,(void*) m2);

pthread_join(thr2,NULL);
cout<<"\nthread1 returns : "<<t1;
cout<<"\nthread2 returns : "<<t2;
//exit(0);
}
void *thrfn (void *rtr)
{
int p=*(int *) x;
int q=*(int *) y;
int q=*(int *) z;
}
