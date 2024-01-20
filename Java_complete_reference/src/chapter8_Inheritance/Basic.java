package chapter8_Inheritance;

public class Basic {
	int i,j;
	@SuppressWarnings("unused")
	private int p;
	
	void showij() {
		System.out.println("i & j : "+i+" "+j);
	}
}

class B extends Basic{
	int k;
	void showk() {
		System.out.println("k: "+k);
	}
	
	void sum() {
		System.out.println("i+j+k: "+(i+j+k));
	}
}
