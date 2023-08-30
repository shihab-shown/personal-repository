import logo from './logo.svg';
import './App.css';
import MyfirstComponent from './component/FirstComponent';
import {MysecondComponent} from './component/FirstComponent';
import {MythirdComponent} from './component/FirstComponent';

function App() {
  return (
    <div>
      <h1>Hi, I'm a React App</h1>
      <MyfirstComponent />
      <MysecondComponent />
      <MythirdComponent />
    </div>
  );
}

export default App;
