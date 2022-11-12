public class Rectangle {
  private double width;
  private double height;
  public Rectangle() {
    this.width = 1.0;
    this.height = 1.0;
  }
  public Rectangle(double width, double height) {
    this.width = width;
    this.height = height;
  }
  public double getArea() {
    return this.width * this.height;
  }
  public double getPerimeter() {
    return 2 * (this.width + this.height);
  }
  public String toString() {
    return String.format("Width: %.2f Height: %.2f Area: %.2f Perimeter: %.2f\n",this.width, this.height, getArea(), getPerimeter());
    //return "Width: "+this.width+" Height: "+this.height+" Area: "+getArea()+" Perimeter: "+getPerimeter();
  }
}