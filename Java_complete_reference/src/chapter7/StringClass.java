package chapter7;

public class StringClass {
	public static void main(String args[]) {
		String s1 = "I am a String";
		System.out.println(s1);

		String s2 = "I " + "Like to " + "Play";
		System.out.println(s2);
		
		String s3=s1+ " and " + s2;
		System.out.println(s3);
		
		//length
		System.out.println(s1.length());
		
		//char at a position
		System.out.println(s2.charAt(3));
		
		//equals or not?
		if(s1.equals(s2))
			System.out.println("Matched!");
		else
			System.out.println("Mismatched!");
		System.out.println(s1.equals(s2));  //returns boolean
		
		//array of Strings
		String str[]= {"Mahmud","Sakib","Habib"};
		System.out.println(str[1]);
		
		
	}

}
