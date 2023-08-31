import { useState } from "react";
import "./Counter.css";
import CounterButton from "./CounterButton";

export default function Counter(){
  const [count, setCount] = useState(0);
  function increaseParentCount(by){
    //console.log("by: " + by+" count: "+count);
    setCount(count + by);
  }
  return (
    <div className="Counter">
      <CounterButton by={1} increaseParentCount={increaseParentCount} />
      <CounterButton by={5} increaseParentCount={increaseParentCount} />
      <CounterButton by={10} increaseParentCount={increaseParentCount} />
      <span className="count">{count}</span> 
      <br/>
      <button className="reset" onClick={() => setCount(0)}>Reset</button>
    </div>
  );
}



