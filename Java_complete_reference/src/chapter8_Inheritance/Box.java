package chapter8_Inheritance;

public class Box {
	double height;
	double depth;
	double width;
	
	//constructor , passing an object
	Box(Box ob){
		width=ob.width;
		height=ob.height;
		depth=ob.depth;
	}
	
	//constructor when all dimensions apecified
	Box(double h,double w,double d){
		height=h;
		width=w;
		depth=d;
	}
	
	//constructor when no dimension specified
	Box(){
		height=-1;
		width=-1;
		depth=-1;
	}
	
	//constructor, when cube
	Box(double x){
		height=width=depth=x;
	}
	
	double volume() {
		return height*width*depth;
	}
}

class BoxWeight extends Box{
	double weight;
	BoxWeight(double w,double h,double d,double m){
		height=h;
		width=w;
		depth=d;
		weight=m;
	}
	
	double density(BoxWeight ob) {
		return ob.weight/ob.volume();
	}
}

class BoxColor extends Box{
	String color;
	
	BoxColor(double w,double h,double d,String c){
		height=h;
		width=w;
		depth=d;
		color=c;
	}
}
