package chapter7;

public class CallByValye {
	public static void main(String args[]) {
		
		Argument_passing ob1 = new Argument_passing();
		int x=10,y=20;
		System.out.println("x & y before Calling: "+ x +" "+y);
		
		ob1.change(x, y);
		
		System.out.println("x & y after Calling: "+ x +" "+y);
	}
}
