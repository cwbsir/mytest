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
	//std::string str("苏贤科技");
	//lua_pushlstring(L,str.c_str(),str.size());
	//printf("栈顶元素:%s",lua_tostring(L,-1));
	luaL_dofile(L,"main.lua");
	printf("栈中有%d个元素\n",lua_gettop(L));
	lua_close(L);
	getchar();
}