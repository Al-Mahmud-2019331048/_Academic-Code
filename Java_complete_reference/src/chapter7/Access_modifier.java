package chapter7;

public class Access_modifier {
	int a;
	public int b;
	private int c;
	
	void setc(int i) {
		System.out.println("Set method");
		c=i;
		//return c;   //set+get
	}
	int getc() {
		System.out.println("Get method");
		return c;
	}
}

class Main{
	public static void main(String args[]) {
		Access_modifier ob= new Access_modifier();
		
		ob.a=10;
		ob.b=20;
		
//		ob.c=100;  //don't work, c is a private variable
		
		ob.setc(100);
		System.out.println("a , b & c: "+ob.a+" "+ob.b+" "+ob.getc());
	}
}
