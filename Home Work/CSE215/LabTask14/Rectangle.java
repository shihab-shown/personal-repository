public class Rectangle implements Shape{
    private double width;
    private double length;
    public Rectangle(){
        this.width = 1;
        this.length = 1;
    }
    public Rectangle(double length, double width){
        this.width = width;
        this.length = length;
    }

    public void setWidth(double width) {
        this.width = width;
    }

    public double getWidth() {
        return width;
    }

    public void setLength(double length) {
        this.length = length;
    }

    public double getLength() {
        return length;
    }
    public double getArea(){
        return this.length*this.width;
    }
    public double getPerimeter(){
        return this.length+this.width;
    }
    public String toString(){
        return "Length: "+this.length+"\nWidth: "+this.width+"\nArea: "+this.getArea()+"\nPerimeter: "+this.getPerimeter();
    }

}
