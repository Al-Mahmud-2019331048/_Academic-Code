package chapter3;

public class Promoted {
	public static void main(String args[]) {
		
		byte b=15;
		//char ch='X';
		short s=12;
		int ans=b+s; //promoted to int
		System.out.println(ans);
		int in=1000;
		long l=12345;
		long ans2=in+l;  //promoted to loong
		System.out.println(ans2);
		float f=5.67f;
		float ans3=l+in+f; //promoted to float;
		System.out.println(ans3);
		double d=55.346d;
		double ans4=l*b + f+ d;   //promoted to double
		
		System.out.println(ans4);
		
		System.out.println(~(-5));
		
	}
}
