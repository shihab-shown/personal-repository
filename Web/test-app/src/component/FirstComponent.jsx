export default function MyfirstComponent() {
  return (
    <div>
      <h3>And I'm 10 seconds old</h3>
    </div>
  );
}
export function MysecondComponent() {
  return (
    <div>
      <h3>And I'm 20 seconds old</h3>
    </div>
  );
}
const person = {
  name: "John",
  age: 30,
  printInfo: () => {
    console.log(person.name);
  }
}
export function MythirdComponent() {
  return (
    <div>
      <h3>{person.printInfo()}</h3>
      <h3>{person.age}</h3>
    </div>
  );
}