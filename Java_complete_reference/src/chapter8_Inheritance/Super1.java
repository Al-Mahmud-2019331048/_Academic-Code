package chapter8_Inheritance;

public class Super1 {
	int x=10;
}

class Sub extends Super1{
	int x=5;
	void display(){
		System.out.println(x);  //super.x
	}
}

class Test{
	public static void main(String args[]) {
		Sub ob=new Sub();
		ob.display();  //kon x print korbe? 5/10
		//super.x;
	}
}