public class Triangle implements Shape {
    private double base;
    private double height;
    public Triangle(){
        this.base = 1;
        this.height = 1;
    }
    public Triangle(double base, double height){
        this.base = base;
        this.height = height;
    }

    public void setBase(double base) {
        this.base = base;
    }

    public double getBase() {
        return this.base;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    public double getHeight() {
        return this.height;
    }
    public double getArea(){
        return 0.5 * this.base*this.height;
    }
    public double getPerimeter(){
        double BHalf = 0.5*this.base;
        double a = Math.sqrt(Math.pow(BHalf,2) + Math.pow(this.height,2));
        return a+this.height+this.base;
    }
    //@Override
    public String toString(){
        return "Height: "+this.height+"\nBase: "+this.base+"\nArea: "+this.getArea()+"\nPerimeter: "+this.getPerimeter();
    }
}
