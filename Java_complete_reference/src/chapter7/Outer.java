package chapter7;

import chapter7.Outer.Inner;

@SuppressWarnings("unused")

public class Outer {
	int outer_x=100;
	
	//System.out.println(inner_x); //cannot accessable
	
	void func() {
		Inner inner = new Inner();
		inner.display();
		inner.inner_x=10;  
//		System.out.println(inner_x);  //cannot accessable,Inner class variable
	}
	
	class Inner{
		int inner_x=100;  //local to Inner class
		void display() {
			System.out.println("outer_x="+outer_x);
		}
	}
}

class TestInner{
	public static void main(String args[]) {
		Outer ou=new Outer();
		
		Outer.Inner i = ou.new Inner();
		
		i.inner_x=100;
		i.display();
		
		Outer outer=new Outer();
		outer.func();
	}
}
