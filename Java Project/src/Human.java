// This is a constructor

public class Human extends Cars{
  String name;
  int age;
  Human(String name, int age){
    this.name = name;
    this.age = age;
  }
  String eat(){
    return " is eating";
  }
  void drink(){
    System.out.println(this.name+" is drinking");
  }
  void drive(){
    if (50<=Cars.speed && 50<=this.age) {
      System.out.println(Cars.name+" is too fast for you, "+this.name);
    } else {
      System.out.println(Cars.name+" is fine for you, "+this.name);
    }
  }

}
