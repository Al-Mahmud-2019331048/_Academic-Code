package chapter6_class;

public class Box {
	double length,height,width;
	
	//constructor
	Box(){
		
	}
	
	//parameterized constructor
	Box(double length, double height,double width){
		this.length=length;    
		this.height=height;		//this keyword
		this.width=width;
	}
	
	//method 
	double Volume(double x,double y,double z) {
		return x*y*z;
	}
	
	void display() {
		System.out.println("Length: "+length);
		System.out.println("Height: "+height);
		System.out.println("Width: "+width);
	}
}
