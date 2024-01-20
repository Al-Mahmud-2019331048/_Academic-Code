package chapter8_Inheritance;

//using super to refer overriden method 

public class Super2 {
	
	void display() {
		System.out.println("Inside super class");
	}
}


class SubClass extends Super2{
	void display() {
		super.display();  //super class er method call hbe
		System.out.println("Inside sub class");
	}
}

class TestMethod{
	public static void main(String args[]) {
		SubClass ob= new SubClass();
		ob.display();  //kon method call hbe?
	}
	

}