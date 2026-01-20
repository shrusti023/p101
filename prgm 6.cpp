# include <stdio.h>
int i=-1,j=-1;
top=-1,j,k,found = 0;
void insert();
if (top== MAX 1){
        printf("Stack is overflow");
        scanf("%d",&top);
        return 0;
}
else{
    printf("Enter element :",%d\n);
    scanf("%d",& [top ++]);
}
void delete ();
if (top==-1){
    printf("Stack is underflow");
    scanf("%d",& [top--]);
    for (int i=0;i<n;i++){
    }
    printf("popped element is :",%d\n);
    scanf("%d", &s[top++]);
}
void display();
if (top==-1){
    printf("Stack is empty:");
    scanf("%d",&s[top--]);
    return 0;
}
else
{
    printf("The element is not found");
    scanf("%d", &found 0);
}
int main (){
printf("\n 1. insertion of an element overflow\n 2. deletion of an overflow\n 3. insertion of an element underflow\n 4. deletion of an element underflow\n 5. display\n 6. exit\n");
scanf("%d%d%d%d", & insert overflow, &delete overflow, &insert underflow, &delete underflow, &display);
printf("\n Enter your choice:");
scanf("%d", &ch);
switch (ch){
case 1: insert the overflow();
break;
case 2: delete the overflow();
break;
case 3: insert the underflow();
break;
case 4: delete the underflow();
break;
case 5: dislpay();
break;
case 6: exit(0);
break;
default:
    printf("Enter the valid expression");
    return 0;
    }
}
