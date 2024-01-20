package chapter8_Inheritance;

//super keyword

public class BoxSuper {
//	double height,width,length;
	private double height,width,length;
	
	//default constructor
	BoxSuper(){
		height=-1;
		width=-1;
		length=-1;
	}
	
	//constructor clone of an object
	BoxSuper(BoxSuper ob){
		height=ob.height;
		width=ob.width;
		length=ob.length;
	}
	

	BoxSuper(double h,double w,double l){
		height = h;
		width = w;
		length = l;
	}
	
	//cube
	BoxSuper(double len){
		height=width=length=len;
	}
	
	double volume() {
		return height*width*length;
	}
	
	void display() {
		System.out.println("Height: "+height);
		System.out.println("Width: "+width);
		System.out.println("Length: "+length);
	}
}


class BoxWeight2 extends BoxSuper{
	double weight;
	
	BoxWeight2(double h, double w, double l,double m) {
		super(h, w, l);  //superclass constructor,must be frist statement
		weight = m;
	}
	
	//constructor clone of an object
	BoxWeight2(BoxWeight2 ob){
		super(ob);
		weight=ob.weight;
	}
	
	//default constructor
	BoxWeight2(){
		super();
		weight=-1;
	}
	
	//cube
	BoxWeight2(double len,double w){
		super(len);
		weight=w;
	}
	
	void display() {
		super.display();
		System.out.println("Weight: "+weight);
		System.out.println();
	}
}

class TestBox{
	public static void main(String args[]) {
		
		BoxWeight2 b1= new BoxWeight2(10,20,30,5);
		b1.display();
		System.out.println("Volume: "+b1.volume());
		System.out.println();
		
		BoxWeight2 b2= new BoxWeight2();
		b2.display();
		
		BoxWeight2 b3= new BoxWeight2(3,2);
		b3.display();
		System.out.println("Volume: "+b2.volume());
		System.out.println();
		
		BoxWeight2 clone= new BoxWeight2(b1);
		clone.display();
		System.out.println("Volume: "+clone.volume());
		System.out.println();
	}
}




