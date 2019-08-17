
#ifndef stack_arr
#define stack _arr
struct s {
 int boyut;
 int tepe;
 int * dizi; } ;

typedef s *stack;
stack * tanim();
int pop(stack *) ;
void push(int a,stack *) ;
void bastir (stack *);

#endif
