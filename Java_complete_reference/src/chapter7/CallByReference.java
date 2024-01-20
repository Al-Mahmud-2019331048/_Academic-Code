package chapter7;

public class CallByReference {
	public static void main(String args[]) {
		
		Argument_passing ob = new Argument_passing(10,20);

		System.out.println("ob.a & ob.b before Calling: "+ ob.a +" "+ob.b);
		
		ob.change(ob);
		
		System.out.println("ob.a & ob.b after Calling: "+ ob.a +" "+ob.b);
	}
	
	
}
