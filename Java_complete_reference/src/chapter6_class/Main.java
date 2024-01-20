package chapter6_class;

class Typetester {
    void printType(byte x) {
        System.out.println(x + " is an byte");
    }
    void printType(int x) {
        System.out.println(x + " is an int");
    }
    void printType(float x) {
        System.out.println(x + " is an float");
    }
    void printType(double x) {
        System.out.println(x + " is an double");
    }
    void printType(char x) {
        System.out.println(x + " is an char");
    }
}

public class Main {
	public static void main(String args[]) {
		
		Typetester tester = new Typetester();
		
		//creating object
		Box b1=new Box(2.2,1.3,0.5);
		/*
		 * byte b = 127;
		 * b*=2; // thik
		 * b = (byte)(b*2); // vul
		 */
		//printing wihout display() function
		
		byte b=7;
		tester.printType(b);
		System.out.println(b*=2.5);   
	    //	b=b*2;
		tester.printType(b);
		//b=b*2;  (int)
		
		float x = 11;
		tester.printType(x);
		x*=246546547654367887654675697644654654.56465465465465345678765432f;   //wtf?
		tester.printType(x);
		
		//int x = (int)2.5;
		
		System.out.println(x);
		
		System.out.println("Length: "+b1.length);
		System.out.println("Height: "+b1.height);
		System.out.println("Width: "+b1.width);
		System.out.println("Volume: "+b1.Volume(2.2, 1.3, 0.5));
		
		b1.height=4.5;   //changing height
		b1.display();
		
		
		//printing height,weigth,length by display() function
		
		Box b2=new Box(1,3,4);
		b2.display();
		
	}
}
