 #include <iostream>
using namespace std;
int stack[5], n=5 , top = -1;
//PUSH OPERATION
void push ( int x)
{
    if (top==n-1)
    cout << "Stack is full \n";
    else 
    {
        top++;
        stack[top] = x;
    }
}
//POP OPERATION
void pop()
{
    if(top== -1)
    cout << "Stack is empty\n";
    else 
    {
        cout << "Popped element is " << stack[top] << endl;
        top--;
    } 
}

//PEEK OPERATION
int peek()
{
    return stack[top];
}
void display()
{
    if (top>=0)
    {
        cout << "Stack elements are: \n";
        for (int i=top; i>=0; i--)
        cout << stack[i] <<endl;
    }
    else 
    cout << "Stack is empty\n";
}
int main ()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();
    pop();
    pop();
    pop();
    display();
    int y = peek();
    cout << "Top element of the stack is : " << y << endl;
}