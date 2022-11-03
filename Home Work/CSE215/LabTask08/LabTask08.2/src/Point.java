public class Point {
  private int x;
  private int y;
  public Point(){
    this.x = 0;
    this.y = 0;
  }
  public Point(int x, int y){
    this.x = x;
    this.y = y;
  }
  public int getX() {
    return this.x;
  }
  public int getY() {
    return this.y;
  }
  public void setX(int x) {
    this.x = x;
  }
  public void setY(int y) {
    this.y = y;
  }
  public double distance(Point point) {
    double dx = Math.pow((this.x - point.x),2);
    double dy = Math.pow((this.y - point.y),2);
    return Math.sqrt((dx+dy));
  }
  @Override
  public String toString() {
    return "(X, Y): ("+this.x+", "+this.y+")";
  }

}
