import {useParams} from 'react-router-dom';
import axios from 'axios';
import { useState } from 'react';

const baseURL = axios.create({
  baseURL: 'http://localhost:8080'
});
export default function WelcomeComponent(){
  const {username} = useParams();
  const [message, setMessage] = useState('');
  function handleSuccessfulResponse(response){
    console.log(response);
    setMessage(response.data);
  }
  function handleErrorResponse(error){
    console.log(error);
    setMessage(error.message);
  }
  function callHelloWorldRestAPI(){
    baseURL.get(`/hello-world/path-variable/${username}`)
    .then(response => handleSuccessfulResponse(response))
    .catch(error => handleErrorResponse(error))
    .finally(() => console.log('Finally'));
  };
  return (
      <div className="WelcomeComponent">
        <div>Welcome {username}</div>
        <div>
          <button className='Hello' onClick={callHelloWorldRestAPI}>Hello World</button>
        </div>
        <div className='text-info'>{message}</div>
      </div>
    );
}