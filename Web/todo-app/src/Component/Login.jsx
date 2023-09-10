import {useState} from 'react';
import { useNavigate } from 'react-router-dom';

export default function LoginComponent(){
  const [username, setUsername] = useState('');
  const [password, setPassword] = useState('');
  const [isLoginSuccess, setIsLoginSuccess] = useState();
  const navigate = useNavigate();
  function handleUsernameChange(event){
    console.log(event.target.value);
    setUsername(event.target.value);
  }
  function handlePasswordChange(event){
    console.log(event.target.value);
    setPassword(event.target.value);
  }
  function handleLogin(){
    if(username === 'shown' && password === '1234'){
      console.log('Successful');
      setIsLoginSuccess(true); 
      navigate(`/welcome/${username}`);
    }
    else{
      console.log('Failed');
      setIsLoginSuccess(false);
    }
  }
  return(
    <div className="Login">
      <div>
        <label>Username: </label> <input type="text" name="username" value={username}  onChange={handleUsernameChange}/>
      </div>
      <div>
        <label>Password: </label><input type="password" name="password" value={password} onChange={handlePasswordChange} />
      </div>
      <div>
        <button className="loginButton" onClick={handleLogin}>Login</button>
      </div>
      <ShowMessage state={isLoginSuccess} />
    </div>
  );
}

function ShowMessage({state}){
  if(state){
    return(
      <div>Authentication Success</div>
    );
  }
  else if(state === false){
    return <div>Authentication Failed</div>
  }
  return null;
}