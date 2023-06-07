#f::         ;Win+z hotkey
Run, https://www.facebook.com/ ;Run this URL
Return

#s::
Run, https://www.google.com/
Return

CapsLock & w::
Send, {w down}
KeyWait, LButton, D
Send, {w up}
Return

$PgUp::Send, {Volume_Up}
$PgDn::Send, {Volume_Down}
!.::Send, {Media_Next}
!,::Send, {Media_Prev}
!/::Send, {Media_Play_Pause}
Return

;#IfWinActive,
;Ctrl+m = atl + Space + m
^m:: send, !{Space}n
Return


^!a:: 
Send, "House No 36, Road No 2, Block C, Basundhara RA, Dhaka"
return

