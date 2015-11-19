--用闭包的方式实现面向对象
function People(name)
  local self={}
  local function init()
    self.name=name
  end
  init()
  self.sayHello=function ()
    print("Hello,"..name)
  end
  return self
end

local p=People("cwbsir")
p:sayHello()

--实现继承
function Man(name)
  local self=People(name)
  self.sayHi=function ()
    print("Hi,"..name)
  end
  return self
end

local m=Man("yang")
m:sayHello()
m:sayHi()

