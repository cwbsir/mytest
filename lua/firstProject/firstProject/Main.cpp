#include <iostream>
extern "C"
{
	#include "E:\LuaLib\src\lua.h"
	#include "E:\LuaLib\src\lualib.h"
	#include "E:\LuaLib\src\lauxlib.h"
}
#pragma comment(lib,"E:/LuaLib/bin/LuaLib.lib")
void main()
{
	
	lua_State *L=luaL_newstate();
	luaopen_base(L);
	//std::string str("���ͿƼ�");
	//lua_pushlstring(L,str.c_str(),str.size());
	//printf("ջ��Ԫ��:%s",lua_tostring(L,-1));
	luaL_dofile(L,"main.lua");
	printf("ջ����%d��Ԫ��\n",lua_gettop(L));
	lua_close(L);
	getchar();
}