# Instructions

#### Download Source and Compile for 64-bits version with NX enabled

```
gcc nx_bypass.c -m64 -o nx_bypass -fno-stack-protector
```
#### Disable ASLR
```
echo 0 | sudo tee /proc/sys/kernel/randomize_va_space
```

* [Source code]()
* [Exploit in  python]()


![image](https://github.com/Vsmzin/pwning/assets/65165845/8f4b8ef7-57c8-4fb0-a728-1265dc16c721)
