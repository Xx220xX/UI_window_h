//
// Created by Sala 01 on 25/07/2021.
//

#ifndef UI_WIN32_MEMORY_UTILS_H
#define UI_WIN32_MEMORY_UTILS_H
#include <wchar.h>
#include <stdio.h>
typedef wchar_t wchar;
wchar *wmem2str(size_t memorie, wchar *buff, size_t len) {
	size_t B = memorie % 1024;
	memorie /= 1024;
	size_t K = memorie % 1024;
	memorie /= 1024;
	size_t M = memorie % 1024;
	memorie /= 1024;
	size_t G = memorie % 1024;
	memorie /= 1024;
	size_t T = memorie;
	int flag=0;
	int bytes=0;
	if(T){
		bytes+=snwprintf(buff+bytes,len-bytes,L"%lld TB ",T);
		flag = 1;
	}if(G){
		bytes+=snwprintf(buff+bytes,len-bytes,L"%lld GB ",G);
		flag = 1;
	}if(K){
		bytes+=snwprintf(buff+bytes,len-bytes,L"%lld KB ",K);
		flag = 1;
	}if(B || !flag){
		bytes+=snwprintf(buff+bytes,len-bytes,L"%lld B",B);
	}
	return buff;
}
char *mem2str(size_t memorie, char *buff, size_t len) {
	size_t B = memorie % 1024;
	memorie /= 1024;
	size_t K = memorie % 1024;
	memorie /= 1024;
	size_t M = memorie % 1024;
	memorie /= 1024;
	size_t G = memorie % 1024;
	memorie /= 1024;
	size_t T = memorie;
	int flag=0;
	int bytes=0;
	if(T){
		bytes+=snprintf(buff+bytes,len-bytes,"%lld TB ",T);
		flag = 1;
	}if(G){
		bytes+=snprintf(buff+bytes,len-bytes,"%lld GB ",G);
		flag = 1;
	}if(K){
		bytes+=snprintf(buff+bytes,len-bytes,"%lld KB ",K);
		flag = 1;
	}if(B || !flag){
		bytes+=snprintf(buff+bytes,len-bytes,"%lld B ",B);
	}
	return buff;
}

#endif //UI_WIN32_MEMORY_UTILS_H
