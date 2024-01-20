package chapter3;

public class Literals {
	public static void main(String args[]) {
		int x=023; //octal
		System.out.println("x= "+x);
		
		x=0x15;  //hexadecimal
		System.out.println("x= "+x);
		
		x=0b1011;  //binary
		System.out.println("x= "+x);
		
		x=123_456_789;  //large number,_ ignored
		System.out.println("x= "+x);
		
		double d=2335.56d;
		float f=345.64f;
		System.out.println("d= "+d);
		System.out.println("f= "+f);
		
		f=(float) 0x12.2P3;  //hexadecimal
		System.out.println("f= "+f);
		
		d=123_34_5.34_94;
		System.out.println("d= "+d);
		
		char ch='\141';   //octal char ==a
		System.out.println(ch);
		
		ch='\u0061';  //hexa  ==a
		System.out.println(ch);
		
		String s="I am Mahmud\nI love JAVA";
		System.out.println(s);
		
	}
}
