import {useState} from 'react';

export default function CounterButton({by, increaseParentCount}){
  const [count, setCount] = useState(0);
  function increaseCount(){
    //console.log("by: " + by+" count: "+count);
    setCount(count + by);
    //console.log(count);
    increaseParentCount(by);
  }
  function decreaseCount(){
    setCount(count - by);
    increaseParentCount(-by);
  }
  return (
    <div className="CounterButton">
      <button 
        className="CounterButton1" onClick={increaseCount}
      >+{by}</button>
      <button 
        className="CounterButton2" onClick={decreaseCount} 
      >-{by}</button>
    </div>
  );
}