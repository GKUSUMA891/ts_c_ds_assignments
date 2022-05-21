===================  OPERATORS ========================

Evaluate the expression in a step by step way based on operator precedence and associativity

1) printf("%d\n",1==5==5);
o/p:0
because it will compare from left to right .so (1==5) is 0 and (0==5) is 0.

2) int i =0;
   printf("%d %d",i,i++);
o/p:1 0
because (i++) is postincrement so value will be 0 but i value will be 1.excuting from right to left.

3) int x=5;
   printf("%d %d %d\n",x++,x++,x++);
o/p:7  6   5
because (x++) is postincrement so value will be 5 but x value will be 6.excuting from right to left.

4) int x=2;
   printf("%d   ",++x++);
   printf("%d\n",x++);
o/p:line number 2  is error because lvalue required as increment operand.

5) int k=1;
   printf("%d==1 is ""%s\n",k,k==1?"TRUE":"FALSE");
o/p:1==1 is TRUE

6) int i=5;
   i=i++ - --i + ++i;
o/p:i=6;
because it will executing from right to left

7) int a=7;
   a+=a+=a-=6;
   printf("%d\n",a);
o/p:4
because it will execute from right to left.
1. a-6-->7-6=1
2. a+1-->1+1=2
3. a+2-->2+2=4

8) int x=10,y=5,p,q;
   p=x>9;
   q=p||(x=5,y=10);
   printf("%d %d %d\n",q,x,y);
o/p:1 10 5
because p=10>9 is true p=1, 
q=1 ||(x=5,y=10)
so or operation first value is true then it will not check the remaining

9) int x=2,y=1;
   y+=x<<=2;
   printf("%d %d\n",x,y);
o/p:8 9
because line 2 will execute from right to left. 
first x<<=2-->x<<2--> so x is 8.
second y+=x-->y=y+x-->1+8-->so y is 9.

10) int x=2,y=4,z;
    z=y++*x++|y--;
    printf("%d\n",z);
o/p: 13
because multiplication is high precedence y++ * x++-->(4*4)--> 8
y= 5, so z= 8 | 5, z is 13.

11) int a=5,b=6,c=7,d;
    d=a&=b&=c&&a;
    printf("%d\n",d);
o/p:0
it will execute from right to left 

12) int i=10;
    i=(10<10)?(10>=10)?(10<=10)?1:2:3:4;
    printf("%d\n",i);
0/p:4
((10<10)?((10>=10)?((10<=10)?1:2):3):4)

13) int a=10,b=20;
    a=(a>5||b=6?40:50);
    printf("%d\n",a);
o/p:error in b=6
because lvalue required as left operand of assignment

14) printf("%x\n",-1>>4);
    printf("%x\n",-1<<4);
o/P:ffffffff
    fffffff0

15) int x=7;
    x=(x<<=x%2);
    printf("%d\n",x);
o/p:14
because it will execute from right to left.

16) int a=2,b=5,c=1;
    printf("%d\n",(b>=a>=c?1:0));
o/p:1
because it will execute from right to left.

17) int a=5;
    a=a-~a +1;
    printf("%d\n",a);
o/p:12
because it will execute from left to right.

18) a=b=c=1;
    x=--a||++b*(3-1)/2&&b*(--c/3);
    printf("%d\n",x);
o/p:0
because it will execute from right to left.

19) a=10
    b = -5
    c = 2.5
    printf("%d %d",sizeof(a) + sizeof((++b) *c, b);
o/p:8 686847704

20) int i=5;
    i=i++ - i
    printf("%d",i)
o/p:-1