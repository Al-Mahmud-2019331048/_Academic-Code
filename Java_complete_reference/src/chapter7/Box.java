package chapter7;

//overload constructor

public class Box {
	double height,width,length;
	
	Box(){
		System.out.println("No parameter in constructor");
	}
	
	
	//parameterised constructor
	Box(double height,double width, double length){
		this.height=height;
		this.width=width;
		this.length=length;
	}
	
	//this constructor takes parameter as a constructor
	Box(Box ob){
		width=ob.width;
		length=ob.length;
		height=ob.height;
	}
}
