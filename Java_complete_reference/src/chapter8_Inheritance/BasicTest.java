package chapter8_Inheritance;

public class BasicTest {
	public static void main(String args[]) {
		Basic superob= new Basic();
		B subob=new B();
		
		System.out.println("For Superclass:");
		superob.i=10;
		superob.j=20;
		
		superob.showij();
		System.out.println();
		
		System.out.println("For Subclass:");
		subob.i=3;
		subob.j=4;
		subob.k=5;
		//subob.p=100; //cannot access,as p is private variable of superclass
		
		subob.showij(); //method of superclass
		subob.showk();
		subob.sum();
		
	}
}
