package chapter7;

public class Overload {
	@SuppressWarnings("unused")
	public static void main(String agrs[]) {
		
		OverloadMethod ob=new OverloadMethod();
		
		ob.sum();
		ob.sum(2, 3);
		System.out.println(ob.sum(4, 5.5));
		
		
		//constructors
		Box b1=new Box();

		Box b2=new Box(1,2,3);
		
		Box clonebox=new Box(b2);   //taking an object as a parameter
	}
}
