public class Circle {
    private double radius;
    static int instanceNum = 0;
    public Circle(double r){
        instanceNum++;
        radius = r;
    }
    public Circle(){
        instanceNum++;
        radius = 1;
    }
    public double getArea(){
        return radius*radius*Math.PI;
    }
    public double getPerimeter(){
        return 2*radius*Math.PI;
    }
    public void setRadius(double r){
        radius = r;
    }
    public double getRadius(){
        return radius;
    }
    public String toString(){
        return "Radius: "+getRadius()+"\nArea: "+getArea()+"\nPerimeter: "+getPerimeter();
    }

}
