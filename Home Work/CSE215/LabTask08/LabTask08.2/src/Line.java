public class Line extends Point {
  private Point start;
  private Point end;
  public Line(Point start, Point end) {
    this.start = start;
    this.end = end;
  }
  public Line(int x1, int y1, int x2, int y2) {
    
  }
  public Point getStart() {
    return this.start;
  }
  public Point getEnd() {
    return this.end;
  }
  public void setStart(Point start) {
    this.start = start;
  }
  public void setEnd(Point end) {
    this.end = end;
  }
  public double length() {
    return Math.sqrt((Math.pow(((this.end.getX()) - (this.start.getX())),2.0)) + (Math.pow(((this.end.getY()) - (this.start.getY())),2.0)));
  }
}
