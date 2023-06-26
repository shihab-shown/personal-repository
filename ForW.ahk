#f:: ;Win+z hotkey
  Run, https://www.facebook.com/ ;Run this URL
Return

#s::
  Run, https://www.google.com/
Return

#y::
  Run, https://www.youtube.com/
Return

CapsLock & w::
  Send, {w down}
  KeyWait, LButton, D
  Send, {w up}
Return

CapsLock & q::
  Loop
  {
    Send, {Enter}
    Sleep, 3000
    if GetKeyState("Shift")
      break
  } 
Return

$PgUp::Send, {Volume_Up}
$PgDn::Send, {Volume_Down}
!.::Send, {Media_Next}
!,::Send, {Media_Prev}
!/::Send, {Media_Play_Pause}
Return

^m:: 
  {
    send, !{Space} 
    send, n
    return
  }

