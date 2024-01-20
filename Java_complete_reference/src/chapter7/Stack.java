package chapter7;

public class Stack {
	
	private int st[]=new int[10];
	private int top;
	
	Stack() {
		top=-1;
	}
	
	void push(int x) {
		if(top==9)
			System.out.println("Stack is full");
		else
			st[++top]=x;
	}
	
	int pop() {
		if(top<0) {
			System.out.println("Stack Overflow!");
			return -1;
		}
		else
			return st[top--];
			
	}
	
	int Top() {
		if(top<0) {
			System.out.println("Stack is empty");
			return -1;
		}
		else
			return st[top];
	}
	
}

class MMain {
	
	public static void main(String args[]) {
		Stack MyStack = new Stack();
		
		MyStack.push(10);
		MyStack.push(9);
		MyStack.push(19);
		
		System.out.println(MyStack.Top());
		System.out.println(MyStack.pop());
		System.out.println(MyStack.Top());
		System.out.println(MyStack.pop());
		System.out.println(MyStack.Top());
		System.out.println(MyStack.pop());
		System.out.println(MyStack.Top());
		System.out.println(MyStack.pop());
		
	}
}
