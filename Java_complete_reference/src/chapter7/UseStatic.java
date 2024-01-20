package chapter7;

public class UseStatic {
	static int a=3;
	static int b;
	final int ABC=10;   //initilaize when declear, Uppercase name
	int y=5;
	
	//ABC+=2; //we can't change a final field
	
	static void func(int x) {
		b=b+10;
		System.out.println("x= "+x);
		System.out.println("a= "+a);
		System.out.println("b= "+b);
		//System.out.println("y= "+y);  //Cannot make a static reference to the non-static field y
	}
	
	static {     //static block , run firstly
		System.out.println("In static block");
		b=a*4;
		//y+=4; //we cannot use a non static variable in a static block;
	}
	
	
}


//run main class
class Test {
	public static void main(String[] args) {
		
		//UseStatic ob=new UseStatic();
		
		UseStatic.func(10);
		System.out.println("b="+UseStatic.b);  //we can use static without object 
		
	}
}
