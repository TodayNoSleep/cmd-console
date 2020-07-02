## cmd
server发送指令，client执行指令，返回server执行成功
## 本地版本+网络通信（自己封装，c++的下一代标准网络通信哭asio）
cmd的功能实现

使用者------->自己写一个程序                  进程通信                     cmd.exe

​			           	server                        ------发送命令-------->         client

​                                     							<-----------返回结果


//值0，返回错误
//值1，返回正确


## 写代码遇到问题
### 崩溃
- 代码问题
- 参数不对
  ```
  开头写
  #include "stdafx.h"
  #include <Windows.h> 
  不能多,
  ```
# 0629
### 进程间通信 什么方式
- 管道
	- 匿名管道
	- 命名管道
- 邮件槽
- 剪切板
- 消息
- 共享内存
- 本地socket
- 同步时间
- 文件

PUBG(独立的进程，自己拥有自己的数据)
父子进程之间(父进程----子进程)
杀软(白名单机制，启动)
//linux  a--->  |  -- > b
> netstat -an
A程序将数据通过管道发送到B程序 pipe(管道)
CreatePipe
```c
HANDLE hReadPipe;
HANDLE hWritePipe;
bRet = CreatePipe(&hReadPipe,&hWritePipe,null,0)
if(!bRet){
    printf("create pipe error");
    return 0;
}
```

写文件

`WriteFile`

读文件

`ReadFile`

```c
char szBuf[256];
int nLength = strlen("Hello World")+1;
unsigned int nWritedLength = 0;
memset(szBuf,0,256);

memcpy(szBuf,"Hello World!",nLength);

bRet = WriteFile(hWritePipe,
    szBuf,
    nLength,
    ()&nWritedLength,//c的写法
    reinterpret_cast<LPDWORD>(&nWritedLength),//c++写法
    Null//与异步有关
    );

if(!bRet){
    printf("create pipe error");
    return 0;
}
```
##特别鸣谢
[资源共享吧](https://www.zygx8.com/)
[全能逆向安全培训](https://www.zygx8.com/thread-14469-1-1.html)
全能逆向安全培训的老师和同学，对我的帮助！

## License
[NIT](https://opensource.org/licenses/MIT)
Copyright (c) 2020, 求知者.

