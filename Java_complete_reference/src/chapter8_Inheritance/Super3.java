package chapter8_Inheritance;

public class Super3 {
	
	Super3(){
		System.out.println("Super class constructor");
	}
}


class Sub3 extends Super3{
	
	Sub3(){
		super(); //superclass constructor
		System.out.println("Sub class constructor");
	}
}

class TestConstructor{
	@SuppressWarnings("unused")
	public static void main(String args[]) {
		Sub3 ob = new Sub3();
	}
}