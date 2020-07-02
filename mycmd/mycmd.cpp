// MyCmd.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>

int main(int argc, char* argv[])
{
	//我们的程序创建cmd.exe
	//创建进程
	//winExec()
	//shellExectute()
	//CreateProgrocess()
	//宽字符 编码格式
	//A版本  ANSI
	//W版本 unicode  宽字节
	//使用的时候记得初始化
	PROCESS_INFORMATION  pi = { 0 };	//使用的时候清零
	STARTUPINFO si = { 0 };
	const int n = 123;
	char szCmdline[256] = "/c calc";
	BOOL bRet = CreateProcessA(
		"C:\\Windows\\SysWOW64\\cmd.exe",//被启动的程序
		szCmdline,	//命令行参数
		NULL,//继承属性
		NULL,//继承属性
		TRUE,
		CREATE_NO_WINDOW,//窗口 od调试 DEBUG_PROCESS
		NULL,	//环境变量
		NULL,	//当前路径 程序双击启动时的路径（相对路径）
		&si,	//传出参数
		&pi	//传出参数
	);
	return 0;
}
/*------------------------------*/
// int main(int argc,char* argv[])
// {
// 	//我们的程序创建cmd.exe
// 	//创建进程
// 	//winExec()
// 	//shellExectute()
// 	//CreateProgrocess()
// 	//宽字符 编码格式
// 	//A版本  ANSI
// 	//W版本 unicode  宽字节
// 	//使用的时候记得初始化
// 	PROCESS_INFORMATION  pi = { 0 };	//使用的时候清零
// 	STARTUPINFO si = { 0 };
// 	const int n = 123;
// 	TCHAR szCmdline[256] =_T("/c calc");
// 	/*char* p = u8"张三";*/
// BOOL bRet = CreateProcessA(
// 	    _T("C:\\Windows\\SysWOW64\\cmd.exe"),//被启动的程序
// 		szCmdline,	//命令行参数
// 		NULL,//继承属性
// 		NULL,//继承属性
// 		TRUE,
// 		CREATE_NO_WINDOW,//窗口 od调试 DEBUG_PROCESS
// 		NULL,	//环境变量
// 		NULL,	//当前路径 程序双击启动时的路径（相对路径）
// 		&si,	//传出参数
// 		&pi	//传出参数
// 		);
//     return 0;
// }
/*------------------------------*/
// int main(int argc, char* argv[])
// {
// 	//我们的程序创建cmd.exe
// 	//创建进程
// 	//winExec()
// 	//shellExectute()
// 	//CreateProgrocess()
// 	//宽字符 编码格式
// 	//A版本  ANSI
// 	//W版本 unicode  宽字节
// 	//使用的时候记得初始化
// 	PROCESS_INFORMATION  pi = { 0 };	//使用的时候清零
// 	STARTUPINFOW si = { 0 };
// 	const int n = 123;
// 	wchar_t szCmdline[256] = L"/c notepad";
// 	/*char szCmdline[256] =	"/c calc";*/
// 	BOOL bRet =   /*CreateProcessA*/CreateProcessW(
// 		L"C:\\Windows\\SysWOW64\\cmd.exe",//被启动的程序
// 		szCmdline,	//命令行参数
// 		NULL,//继承属性
// 		NULL,//继承属性
// 		TRUE,
// 		CREATE_NO_WINDOW,//窗口 od调试 DEBUG_PROCESS
// 		NULL,	//环境变量
// 		NULL,	//当前路径 程序双击启动时的路径（相对路径）
// 		&si,	//传出参数
// 		&pi	//传出参数
// 	);
// 	return 0;
// }


