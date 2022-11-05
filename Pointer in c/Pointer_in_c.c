#include<stdio.h>
#include<conio.h>

void main(){
    int x = 10;//actual variable which store 10 value
    int * y =&x;//pinter y is pointing towords the adressof x
    int ** z = &y;//Pointer x is pointer to th epointer y

    printf("value of x : %d\n",x);

    printf("Address of x : %u\n",&x);//&x==y

    printf("Value at  *Y that is x : %d\n",*y);//x==*y

    printf("Adress of Y : %u\n",&y);

    printf("Value at *(&y) that is adress of x: %d\n",*(&y));

    printf("Value at **(&y) that is value at x : %d\n",**(&y));

    printf("Value of z : %d\n",z);

    printf("Address of z : %u\n",&z);

    printf("Value at z : %d\n",*z);

    printf("value at value at z  **z : %d\n",**z);

    printf("value at &z : %d\n",*(&z));

    printf(" &(*z) : %d\n",&(*z));

}

Output:
value of x : 10
Address of x : 381679420
Value at  *Y that is x : 10
Adress of Y : 381679408
Value at *(&y) that is adress of x: 381679420
Value at **(&y) that is value at x : 10
Value of z : 381679408
Address of z : 381679400
Value at z : 381679420
value at value at z  **z : 10
value at &z : 381679408
&(*z) : 381679408
