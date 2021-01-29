#ifndef __PFVER_ACT_H_
#define __PFVER_ACT_H_
#include<iostream>
#include<string>
//版本信息执行器
class VersionActuator
{
private:
    std::string versionInfo;    //版本信息字

public:
    VersionActuator(); //构建方法
    void Execute(); //执行器运行
};
#endif