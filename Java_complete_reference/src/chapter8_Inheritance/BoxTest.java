package chapter8_Inheritance;

public class BoxTest {
	public static void main(String args[]) {
		BoxWeight obw1= new BoxWeight(10,5,7,12.5);
		BoxWeight obw2= new BoxWeight(0.5,0.4,0.3,1.3);
		
		double vol;
		
		vol=obw1.volume();
		System.out.println("Volume of Box 1 is: "+vol);
		System.out.println("Weight of Box 1 is: "+obw1.weight);
		System.out.println("Density of Box 1 is: "+obw1.density(obw1));
		
		System.out.println();
		
		vol=obw2.volume();
		System.out.println("Volume of Box 2 is: "+vol);
		System.out.println("Weight of Box 2 is: "+obw2.weight);
		System.out.println("Density of Box 2 is: "+obw2.density(obw2));
		
		System.out.println();
		System.out.println();
		
		
		//A superclass Variable can reference a Subclass object
		BoxWeight wb=new BoxWeight(1,2,3,4);
		Box b=new Box();
		System.out.println("Volume of BoxWeight is: "+wb.volume());
		
		b=wb;
		
		System.out.println("Volume of Box is: "+ b.volume());
		
		//System.out.println(b.weight);  //Wrong,Box cannot define weight
		
	}
}
