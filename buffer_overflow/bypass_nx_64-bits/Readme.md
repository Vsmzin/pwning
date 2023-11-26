# Instructions

#### Download Source and Compile for 64-bits version with NX enabled

```
gcc nx_bypass.c -m64 -o nx_bypass -fno-stack-protector
```
#### Disable ASLR
```
echo 0 | sudo tee /proc/sys/kernel/randomize_va_space
```

* [Source code](https://raw.githubusercontent.com/Vsmzin/pwning/main/buffer_overflow/bypass_nx_64-bits/bypass_nx_64-bits.c)
* [Exploit python](https://raw.githubusercontent.com/Vsmzin/pwning/main/buffer_overflow/bypass_nx_64-bits/exploit_bypass_nx-64-bits.py)


![image](https://github.com/Vsmzin/pwning/assets/65165845/098f767f-34d0-4272-80a6-606a9c859cb2)
